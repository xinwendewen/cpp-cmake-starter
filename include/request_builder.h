#ifndef REQUEST_BUILDER_H
#define REQUEST_BUILDER_H

#include <cstdint>
#include <vector>

#include "uds_constants.h"

namespace UDS {
// Diagnostic session control type constants
constexpr uint8_t DEFAULT = 0x01;
constexpr uint8_t PROGRAMMING = 0x02;
constexpr uint8_t EXTENDED = 0x03;
constexpr uint8_t SAFETY_SYSTEM_DIAGNOSTICS = 0x04;

// Diagnostic session control request builder
class DiagnosticSessionControlRequestBuilder {
   public:
    explicit DiagnosticSessionControlRequestBuilder(uint8_t type) : type_(type) {}

    DiagnosticSessionControlRequestBuilder& setType(uint8_t type) {
        type_ = type;
        return *this;
    }

    std::vector<uint8_t> build() const {
        std::vector<uint8_t> request;
        request.push_back(SID::DIAGNOSTIC_SESSION_CONTROL);
        request.push_back(type_);
        return request;
    }

    static DiagnosticSessionControlRequestBuilder createDefault() {
        return DiagnosticSessionControlRequestBuilder(DEFAULT);
    }

    static DiagnosticSessionControlRequestBuilder createProgramming() {
        return DiagnosticSessionControlRequestBuilder(PROGRAMMING);
    }

    static DiagnosticSessionControlRequestBuilder createExtended() {
        return DiagnosticSessionControlRequestBuilder(EXTENDED);
    }

    static DiagnosticSessionControlRequestBuilder createSafetySystemDiagnostics() {
        return DiagnosticSessionControlRequestBuilder(SAFETY_SYSTEM_DIAGNOSTICS);
    }

   private:
    uint8_t type_;
};

// ECU reset type constants
constexpr uint8_t ECU_RESET_HARD = 0x01;
constexpr uint8_t ECU_RESET_KEY_OFF_ON = 0x02;
constexpr uint8_t ECU_RESET_SOFT = 0x03;

// ECU reset request builder
class ECUResetRequestBuilder {
   public:
    explicit ECUResetRequestBuilder(uint8_t type) : type_(type) {}

    ECUResetRequestBuilder& setType(uint8_t type) {
        type_ = type;
        return *this;
    }

    std::vector<uint8_t> build() const {
        std::vector<uint8_t> request;
        request.push_back(SID::ECU_RESET);
        request.push_back(type_);
        return request;
    }

    static ECUResetRequestBuilder createHardReset() {
        return ECUResetRequestBuilder(ECU_RESET_HARD);
    }

    static ECUResetRequestBuilder createKeyOffOnReset() {
        return ECUResetRequestBuilder(ECU_RESET_KEY_OFF_ON);
    }

    static ECUResetRequestBuilder createSoftReset() {
        return ECUResetRequestBuilder(ECU_RESET_SOFT);
    }

   private:
    uint8_t type_;
};

// Read Data By Identifier request builder
class ReadByDIDRequestBuilder {
   public:
    explicit ReadByDIDRequestBuilder(const std::vector<uint8_t>& did) : did_(did) {}

    ReadByDIDRequestBuilder& setDID(const std::vector<uint8_t>& did) {
        did_ = did;
        return *this;
    }

    std::vector<uint8_t> build() const {
        std::vector<uint8_t> request;
        request.push_back(SID::READ_DATA_BY_IDENTIFIER);
        request.insert(request.end(), did_.begin(), did_.end());
        return request;
    }

   private:
    std::vector<uint8_t> did_;
};

// Security Access request builder
class SecurityAccessSeedRequestBuilder {
   public:
    explicit SecurityAccessSeedRequestBuilder(uint8_t securityLevel)
        : securityLevel_(securityLevel) {}

    SecurityAccessSeedRequestBuilder& setSecurityLevel(uint8_t securityLevel) {
        securityLevel_ = securityLevel;
        return *this;
    }

    std::vector<uint8_t> build() const {
        std::vector<uint8_t> request;
        request.push_back(SID::SECURITY_ACCESS);
        request.push_back(securityLevel_);
        return request;
    }

   private:
    uint8_t securityLevel_;
};

// Security Access request builder
class SecurityAccessKeyRequestBuilder {
   public:
    explicit SecurityAccessKeyRequestBuilder(uint8_t securityLevel)
        : securityLevel_(securityLevel) {}

    SecurityAccessKeyRequestBuilder& setKey(const std::vector<uint8_t> key) {
        key_ = key;
        return *this;
    }

    SecurityAccessKeyRequestBuilder& setSecurityLevel(uint8_t securityLevel) {
        securityLevel_ = securityLevel;
        return *this;
    }

    std::vector<uint8_t> build() const {
        std::vector<uint8_t> request;
        request.push_back(SID::SECURITY_ACCESS);
        request.push_back(securityLevel_);
        request.insert(request.end(), key_.begin(), key_.end());
        return request;
    }

   private:
    uint8_t securityLevel_;
    std::vector<uint8_t> key_;
};
}  // namespace UDS
#endif  // REQUEST_BUILDER_H

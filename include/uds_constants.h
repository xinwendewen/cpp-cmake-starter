#ifndef UDS_CONSTANTS_H
#define UDS_CONSTANTS_H

#include <cstdint>

namespace UDS {

namespace SID {

// Diagnostic services IDs
constexpr uint8_t DIAGNOSTIC_SESSION_CONTROL = 0x10;
constexpr uint8_t ECU_RESET = 0x11;
constexpr uint8_t CLEAR_DIAGNOSTIC_INFORMATION = 0x14;
constexpr uint8_t READ_DTC_INFORMATION = 0x19;
constexpr uint8_t READ_DATA_BY_IDENTIFIER = 0x22;
constexpr uint8_t READ_MEMORY_BY_ADDRESS = 0x23;
constexpr uint8_t READ_SCALING_DATA_BY_IDENTIFIER = 0x24;
constexpr uint8_t SECURITY_ACCESS = 0x27;
constexpr uint8_t COMMUNICATION_CONTROL = 0x28;
constexpr uint8_t READ_DATA_BY_PERIODIC_IDENTIFIER = 0x2A;
constexpr uint8_t DYNAMICALLY_DEFINE_DATA_IDENTIFIER = 0x2C;
constexpr uint8_t WRITE_DATA_BY_IDENTIFIER = 0x2E;
constexpr uint8_t IO_CONTROL_BY_IDENTIFIER = 0x2F;
constexpr uint8_t ROUTINE_CONTROL = 0x31;
constexpr uint8_t REQUEST_DOWNLOAD = 0x34;
constexpr uint8_t REQUEST_UPLOAD = 0x35;
constexpr uint8_t TRANSFER_DATA = 0x36;
constexpr uint8_t REQUEST_TRANSFER_EXIT = 0x37;
constexpr uint8_t TESTER_PRESENT = 0x3E;
constexpr uint8_t ACCESS_TIMING_PARAMETER = 0x83;
constexpr uint8_t CONTROL_DTC_SETTING = 0x85;
constexpr uint8_t RESPONSE_ON_EVENT = 0x86;
constexpr uint8_t LINK_CONTROL = 0x87;

}  // namespace SID

}  // namespace UDS

#endif  // UDS_CONSTANTS_H

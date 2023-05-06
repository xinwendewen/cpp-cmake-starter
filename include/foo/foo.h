#ifndef FOO_H
#define FOO_H
#include <cstdint>
namespace foo {
class Foo {
public:
    Foo() noexcept = default;
    Foo(const Foo& other) = delete;
    Foo(Foo&& other) = delete;
    Foo& operator=(const Foo& other) & = delete;
    Foo& operator=(Foo&& other) & = delete;
    ~Foo() noexcept = default;
    int32_t FunctionName() const noexcept;
private:
};
void greeting();
int bar();
} // namespace foo
#endif // FOO_H



#include "foo/foo.h"
#include "InnerFoo.h"

#include <iostream>
namespace foo {

namespace {
    
}

int32_t Foo::FunctionName() const noexcept
{
    const int8_t i = 8;
    return 0;
}

void greeting() {
    InnerFun();
    std::cout << "hello world" << std::endl;
}

int bar() {
    return 5;
}
} // namespace foo

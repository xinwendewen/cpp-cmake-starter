## cpp project structure sample
```
include/ # all public headers and interfaces
  |- foo/ # header of library foo
    |- foo.h
src/ # source dir
  |- foo/ # library foo source
    |- CMakeLists.txt # library foo cmake file
    |- foo.cpp
    |- inner_foo.h # private header of the library
    |- inner_foo.cpp
  |- main.cpp # entry point of the program
test/
  |- foo/ # unit test for library foo
    |- CMakeLists.txt
    |- foo_test.cpp
  |- CMakeLists.txt
CMakeLists.txt # root cmake file
```
## usage
change project name in root `CMakeLists.txt`
change exexutable name in root `CMakeLists.txt` and `run.sh`
run `build.sh` to build the project and `run.sh` to run the application

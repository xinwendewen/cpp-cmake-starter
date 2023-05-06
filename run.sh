#!/bin/bash
#
#

set -e
set -u
./build.sh
./out/bin/executable
./out/test/bin/foo_test

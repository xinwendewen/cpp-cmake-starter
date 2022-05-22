#!/bin/bash
#
#

set -e
set -u

mkdir -p out
cd out
cmake ..
cp compile_commands.json .. || true
make

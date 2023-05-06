#!/bin/bash
#
# build this project

set -e
set -u

readonly SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# readonly variables:
# readonly VAR=xxx

# variables that may be override by input options, will be declare readonly later
CLEAN_FIRST=0
# BB=default

# mutable variables
# cc=default

# parse options using getopts and save to variables above
readonly OPTION_STR="c"
while getopts "${OPTION_STR}" option; do
 case "${option}" in
     c) CLEAN_FIRST=1 ;;
     *) exit -1 ;;
esac
done
shift $(($OPTIND-1))

# ensure readonly
declare -r CLEAN_FIRST
# declare -r BB

main() {
    if [[ ${CLEAN_FIRST} == "1" ]];then
        rm -rf ${SCRIPT_DIR}/out
    fi
    mkdir -p out
    cd out
    cmake ..
    cp compile_commands.json .. || true
    make
    exit 0
}

main $@


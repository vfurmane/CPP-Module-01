#!/bin/sh

cd $(dirname "$0")
set -ex

make
cat -e file.txt

./replace file.txt hello hi
cat -e file.txt.replace
./replace file.txt hello hellooo
cat -e file.txt.replace
./replace file.txt ello hello
cat -e file.txt.replace

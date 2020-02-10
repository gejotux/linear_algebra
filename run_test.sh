#!/bin/bash
rm runTests
cmake .
make
./runTests

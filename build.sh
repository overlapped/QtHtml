# Copyright (c) 2023 Alexey Serebryakov (overlapped@gmail.com)
#
# Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
# or copy at http://opensource.org/licenses/MIT)
mkdir -p build
cd build

# Generate a Makefile with Debug flags
cmake .. -DCMAKE_BUILD_TYPE=Debug

# Build (ie 'make')
cmake --build .

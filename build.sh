# Copyright (c) 2023 Alexey Serebryakov (overlapped@gmail.com)
#
# Distributed under the GNU 3 License (See accompanying file LICENSE
# or copy at http://opensource.org/licenses/GNU3)
mkdir -p build
cd build

# Generate a Makefile with Debug flags
cmake .. -DCMAKE_BUILD_TYPE=Debug

# Build (ie 'make')
cmake --build .

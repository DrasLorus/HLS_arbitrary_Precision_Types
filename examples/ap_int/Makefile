#
# Copyright 2019 Xilinx, Inc.
# Copyright 2022 DrasLorus
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

CXXFLAGS= -std=c++14 -Wall -O3
CXX=g++

all: a.out ex1.out ex2.out ex3.out

a.out: test.cpp
	$(CXX) -I../../include test.cpp $(CXXFLAGS) -o a.out
	./a.out

ex1.out: ap_int_manip_ex.cpp
	$(CXX) -I../../include ap_int_manip_ex.cpp $(CXXFLAGS) -o ex1.out
	./ex1.out

ex2.out:  ap_int_manip_ex2.cpp
	$(CXX) -I../../include ap_int_manip_ex2.cpp $(CXXFLAGS) -o ex2.out
	./ex2.out

ex3.out:  ap_int_manip_ex3.cpp
	$(CXX) -I../../include ap_int_manip_ex3.cpp $(CXXFLAGS) -o ex3.out
	./ex3.out

.PHONY: clean
clean:
	rm -rf *.out

# 
# Copyright 2022 DrasLorus.
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

tar_dir=hls-ap-types-0.0.1.rc2

ap_types_files:=$(wildcard $(tar_dir)/ap_types/*.h)
top_files:=$(wildcard $(tar_dir)/*.h)
priv_files:=$(wildcard $(tar_dir)/ap_types/etc/*.h)

all: install

install:
	install -dCm755 $(PREFIX)/usr/include/ap_types/etc
	install -Cm644 -t $(PREFIX)/usr/include $(top_files)
	install -Cm644 -t $(PREFIX)/usr/include/ap_types/ $(ap_types_files)
	install -Cm644 -t $(PREFIX)/usr/include/ap_types/etc $(priv_files)

uninstall:
	rm $(PREFIX)/usr/include/ap_fixed.h
	rm $(PREFIX)/usr/include/ap_int.h
	@rm -rv $(PREFIX)/usr/include/ap_types
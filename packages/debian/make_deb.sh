#! /bin/sh

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

version="$(grep "Version" control | cut -d ' ' -f 2)"
deb_dir="hls-ap-types_$version-1_all"
include_dir="$deb_dir/usr/include"
rm -rfv "$deb_dir" 

install -dm755 "$include_dir"/ap_types/etc
install -m644 -t "$include_dir"/ap_types ../../include/*.h 
install -Dm644 -t "$include_dir"/ap_types/etc ../../include/etc/ap_private.h
install -m644 -t "$include_dir"/ ../ap_*.h 

mkdir -p hls-ap-types_"$version"-1_all/DEBIAN
cp control hls-ap-types_"$version"-1_all/DEBIAN

dpkg --build hls-ap-types_"$version"-1_all
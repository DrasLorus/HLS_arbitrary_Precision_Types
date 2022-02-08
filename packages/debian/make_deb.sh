#! /bin/sh
version="$(grep "Version" control | cut -d ' ' -f 2)"

mkdir -p hls-ap-types_"$version"-1_all/usr/include/ap_types
cp -r ../../include hls-ap-types_"$version"-1_all/usr/include/ap_types

mkdir -p hls-ap-types_"$version"-1_all/DEBIAN
cp control hls-ap-types_"$version"-1_all/DEBIAN

dpkg --build hls-ap-types_"$version"-1_all
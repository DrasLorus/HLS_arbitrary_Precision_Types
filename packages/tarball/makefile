files:=$(wildcard include/*.h)
files+=include/etc/ap_private.h

all: install

install:
	@install -dvm755 $(PREFIX)/usr/include/ap_types
	@install -vm644 -t $(PREFIX)/usr/include/ap_types/ $(files)
	@ln -vs ap_types/ap_fixed.h $(PREFIX)/usr/include/ap_fixed.h
	@ln -vs ap_types/ap_int.h $(PREFIX)/usr/include/ap_int.h

uninstall:
	unlink $(PREFIX)/usr/include/ap_fixed.h
	unlink $(PREFIX)/usr/include/ap_int.h
	@rm -rv $(PREFIX)/usr/include/ap_types
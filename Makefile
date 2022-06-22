#
# Copyright © 2022 Amazon
#
# Author: Keith Packard <keithpac@amazon.com>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
CFLAGS=-fvisibility=hidden

app: app.c lib/shared-lib.so lib.h
	$(CC) $(CFLAGS) -o $@ app.c shared-lib.so -Wl,-rpath=lib

lib:
	mkdir -p $@

lib/shared-lib.so: lib lib.c lib.h
	$(CC) $(CFLAGS) -shared -o $@ lib.c -Wl,--out-implib=shared-lib.so -lm

clean:
	rm -f app shared-lib.so lib/shared-lib.so
	rmdir lib

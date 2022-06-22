/*
 * Copyright © 2022 Amazon
 *
 * Author: Keith Packard <keithpac@amazon.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */
#define _LIB_EXPORT __attribute__((visibility("default")))
#define _LIB_PRIVATE __attribute__((visibility("hidden")))

_LIB_EXPORT int public_func(int a, int b);

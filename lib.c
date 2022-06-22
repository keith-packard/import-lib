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

#include "lib.h"
#include <math.h>

_LIB_PRIVATE int internal_func(int a)
{
	return exp(a) + 1;
}

_LIB_EXPORT int public_func(int a, int b)
{
	return internal_func(a) + internal_func(b);
}

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
#include <stdio.h>

int main(void)
{
	printf("hello world %d\n", public_func(1, 2));
	return 0;
}

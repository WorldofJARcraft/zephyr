/*
 *
 * Copyright(c) 2024, CISPA Helmholtz Center for Information Security
 * SPDX - License - Identifier : Apache-2.0
 */
#include <cva6.h>
#include <stdio.h>


int main(void)
{
	printf("Hello World! %s\n", CONFIG_BOARD_TARGET);

	z_cva6_finish_test(0);

	return 0;
}

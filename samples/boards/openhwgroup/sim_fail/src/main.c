/*
 * Copyright(c) 2024, CISPA Helmholtz Center for Information Security
 * SPDX - License - Identifier : Apache-2.0
 */
#include <cva6.h>
#include <stdio.h>


int main(void)
{
	printf("Test failure %s\n", CONFIG_BOARD_TARGET);

	z_cva6_finish_test(0xdead);

	return 0;
}

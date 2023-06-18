/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */
#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 success, non zero error.
 */

  int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

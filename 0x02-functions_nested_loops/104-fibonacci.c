#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0
 */
int main(void)
{
	unsigned long int i, r, s, r1, r2, s1, s2;
	r = 1;
	s = 2;
	printf("%lu", r);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", s);
		s = s + r;
		r = s - r;
	}
	r1 = r / 1000000000;
	r2 = r % 1000000000;
	s1 = s / 1000000000;
	s2 = s % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", s1 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);
		s1 = s1 + r1;
		r1 = s1 - r1;
		s2 = s2 + r2;
		r2 = s2 - r2;
	}
	printf("\n");	
	return (0);
}

#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu bite(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bite(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bite(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu bite(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu bite(s)\n", (unsigned long)sizeof(f));
	return (0);
}

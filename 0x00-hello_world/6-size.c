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

	printf("Size of a char: %zu bite(s)\n , sizeof(a)");
	printf("Size of an int: %zu bite(s)\n , sizeof(i)");
	printf("Size of a long int: %zu bite(s)\n , sizeof(l)");
	printf("Size of a long long int: %zu bite(s)\n , sizeof(ll)");
	printf("Size of a float: %zu bite(s)\n , sizeof(f)");
	return (0);
}

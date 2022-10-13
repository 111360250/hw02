#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k,j,l;
	for (i = 0; i < 5; i++)
	{
		for (k = 4; k > i; k--)
			printf(" ");
		for (j = 5; j >= (5 - i); j--)
			printf("*");
		
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");


	}
	for (i = 0; i < 4; i++)
	{
		for (k = 5; k >=(5- i); k--)
			printf(" ");
		for (j = 0; j < (4-i); j++)
			printf("*");
		
		for (j = 3; j > i; j--)
			printf("*");
		printf("\n");

	}
}
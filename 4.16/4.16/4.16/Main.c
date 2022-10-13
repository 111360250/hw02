#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k;
	printf("(a)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j<=i; j++)
			printf("%s", "*");
		printf("\n");
	}
	printf("(b)\n");
	for (i = 0; i < 10; i++)
	{
		for(j=10;j>i;j--)
			printf("%s", "*");
		printf("\n");
	}
	printf("(c)\n");
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		for (k = 0; k<=(10-i); k++)
			printf("%s", "*");
		printf("\n");
	}
	printf("(d)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
			printf(" ");
		for(k=10;k>=(10-i);k--)
			printf("%s", "*");
		printf("\n");
	}
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,a,b;
	char c = '+';
	char d = ' ';
	printf("Enter the long:");
	scanf("%d", &i);
	printf("\n");
	printf("Enter the width:");
	scanf("%d", &j);
	printf("\n");
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < j; b++)
		{
			if ((a == 0) || (a == (i - 1)) || (b == 0) || (b == (j - 1)))
				printf("%c", c);
			else
				printf("%c", d);
		}
		printf("\n");
	}

}
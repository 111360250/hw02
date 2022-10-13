#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b,c;
	while (1)
	{
		printf("Enter # of hours work(-1 to end):");
		scanf("%f", &a);
		printf("\n");
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf("%f", &b);
			printf("\n");
			c = a * b;
			printf("Salary is $%f", c);
			printf("\n");
		}
	}
}
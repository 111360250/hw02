#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &a);
		printf("\n");
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			b = 200 + (a * 0.09);
			printf("Salary is:%f", b);
		}
	}
}
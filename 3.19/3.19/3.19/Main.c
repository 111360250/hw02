#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c,d;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{

			printf("\n");
			printf("Enter interest rate:");
			scanf("%f", &b);
			printf("\n");
			printf("Enter term of the loan in days:");
			scanf("%f", &c);
			printf("\n");
			d = a * b*c / 365;
			printf("The interest charge is $%f", d);
		}
	}
}
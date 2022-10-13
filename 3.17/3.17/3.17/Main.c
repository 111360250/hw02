#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,i;
	float b, c, d, e;
	while (1)
	{
		printf("Enter accounte number(-1 to end):");
		scanf("%d", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("\n");
			printf("Enter begining balance:");
			scanf("%f", &b);
			printf("\n");
			printf("Enter tatal charge:");
			scanf("%f", &c);
			printf("\n");
			printf("Enter total credits:");
			scanf("%f", &d);
			printf("\n");
			printf("Enter credit limit:");
			scanf("%f", &e);
			printf("\n");
			printf("Account:%d\n", a);
			printf("Credit Limit:%f\n", e);
			b = b + c - d;
			printf("balance:%f\n", b);
			if (b > e)
			{
				printf("Credit Limit Exceeded\n");
				printf("\n");
			}
			else
				return 0;
		}
	}
}
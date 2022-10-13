#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,a,b,c,d;
	float k,l;
	printf("Enter the number:");
	scanf("%d", &a);
	printf("\n");	
	switch (a)
	{
	case 1:
		printf("Manager\n");
		printf("Weekly salary is:");
		scanf("%d", &i);
		printf("\n");
		printf("Your weekly salary is%d", i);
		break;
	case 2:
		printf("Hourly worker\n");
		printf("hour salary is :");
		scanf("%d", &j);
		printf("\n");
		printf("work hour:");
		scanf("%f", &k);
		printf("\n");
		if (k <= 40)
		{
			c = j * k;
			printf("salary is %d\n", c);
		}
		else
		{
			d = (j * 40) + (1.5*j*(k - 40));
			printf("salary is %d\n", d);
		}
			
		break;
	case 3:
		printf("Commission worker\n");
		printf("Gross weekly sales:");
		scanf("%f", &l);
		printf("\n");
		printf("salary is %d\n", 250 + (l*1.057));
		break;
	case 4:
		printf("Pieceworker\n");
		printf("fixed amount of money:");
		scanf("%d", &b);
		printf("\n");
		printf("salary is %d", b);
		break;
	}
}
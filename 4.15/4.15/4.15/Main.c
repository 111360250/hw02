#include <stdio.h>
#include <stdlib.h>

int main()
{
	float i,j,a;
	j = 0.1;
	for (i = 0; i < 15; i++)
	{
		j = j + 0.005;
		a = 5000 * (1+j);
	}
	printf("%f", a);
}
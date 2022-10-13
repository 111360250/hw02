#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, squ_c;
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				squ_c = c * c;
				if ((squ_c == a * a + b * b) && (a < b))
					printf("一股為%3d 另一股為%3d 斜邊為%3d\n", a, b, c);
			}
		}
	}
}
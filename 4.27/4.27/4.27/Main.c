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
					printf("�@�Ѭ�%3d �t�@�Ѭ�%3d ���䬰%3d\n", a, b, c);
			}
		}
	}
}
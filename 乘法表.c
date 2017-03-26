# include <stdio.h>
# define MAX a*b
int main(void)
{
	int a, b;
	a = 1,b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			printf("%d*%d=%2d ", a, b, MAX);
			b++;
		}
	printf("\n");
	a++;
	b = a;
	}
	return 0;
}

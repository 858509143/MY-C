/*用while循环打印字母a~g*/
# include <stdio.h>
int main(void)
{
	char c = 'a';

	while (c<='g'){
		printf("%c", c);
		c++;
	}
	printf("\n");
	return 0;
}

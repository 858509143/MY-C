# include <stdio.h>
# define T 60
int main(void)
{
	int m, h;
	printf("分钟TO小时分钟\n请输入分钟数：\n");
	while (scanf("%d", &m),m > 0){
		printf("%dh%dmin\n", m/T, m%T);
		printf("输入大于0的值以继续：\n");
		}
	return 0;
}

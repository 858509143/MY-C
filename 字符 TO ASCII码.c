# include <stdio.h>
int main(void)
{
	char a;
	
    
    printf("输入字符:\n");
    scanf("%c", &a);
    printf("十进制(ASCII)%d\n", a);
    printf("八进制%#o\n", a);
    printf("十六进制%x\n", a);

	return 0;
}

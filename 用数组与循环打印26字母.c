# include <stdio.h>
int main(void)
{
	char abc[26];
	int index= 0;
	int ch;
	for(ch ='a';ch <= 'z';index++,ch++)
		abc[index] = ch;
	for(index = 0;index<26;index++)
		printf("%c",abc[index]);
	printf("\n");
	return 0;
}

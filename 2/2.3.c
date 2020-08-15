//ASCII码转字符
#include<stdio.h>
int main(void)
{
	int letter;
	
	printf("请输入字符.\n");
	scanf("%c",&letter);
	printf("此字符的ASCII码为%d", letter );

	getchar();
	getchar();
	return 0;
}
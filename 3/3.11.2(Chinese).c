//ASCII码转字符
#include<stdio.h>
int main(void)
{
	int letter;
	
	printf("请输入字符的ASCII码.\n");
	scanf("%d",&letter);
	printf("此字符为%c", letter );

	getchar();
	getchar();
	return 0;
}

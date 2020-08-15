#include<stdio.h>
#define PRAISE "你是个非凡的人."
int main(void)
{
	char name[40];
	
	printf("你的名字是？\n ");
	scanf("%s", name);
	printf("你好, %s. %s\n", name, PRAISE);
	printf("你的名字的字符长度为%d",strlen(name));

    getchar();
	getchar();	
	return 0;
}
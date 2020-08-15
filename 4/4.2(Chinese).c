#include<stdio.h>
#define PRAISE "你是一个辣鸡的存在."
int main(void)
{
	char name[40];
	
	printf("你的名字是？\n ");
	scanf("%s", name);
	printf("你好, %s. %s\n", name, PRAISE);

	getchar();
	getchar();	
	return 0;
}	
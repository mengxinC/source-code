//年龄转化为秒数
#include<stdio.h>
int main(void)
{
	int Age;
	
	printf("你现在的年龄是?\n");
	scanf("%d",&Age);
	printf("你现在出生了%u秒", Age *31560000 );

	getchar();
	getchar();
	return 0;
}
    
//char的用法
//char类型用于储存字符(如，字母或标点符号)
//printf（）函数用%c指明待打印的字符,用%d转换说明打印char类型变量的值
#include<stdio.h>
int main(void)
{
	char beep = 'i';
	printf("%d",beep);

	getchar();
	return 0;
}
//ASCII码转字符
#include<stdio.h>
int main(void)
{
	int letter;
	
	printf("Please enter the ASCII code of the character.\n");
	scanf("%d",&letter);
	printf("This character is %c", letter );

	getchar();
	getchar();
	return 0;
}
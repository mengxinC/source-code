#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	
	printf("what's your name\n ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	getchar();
	getchar();	
	return 0;
}
#include<stdio.h>
int main (void)
{
	int number,Age;
	
	printf("����������\n");
	scanf("%d", &number);
    Age = number - 1;
	while  (++Age < number +11)
	{
		printf("%3d",Age);
	}
	
	getchar();
	getchar();
	return 0;
}
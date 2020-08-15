#include<stdio.h>
#define WEEKLY 7
int main (void)
{
	int fate,week,fates;
	fate = 1;
	
	while (fate > 0 )
	{
		printf("请输入天数(输入0或负数退出循环)\n");
		scanf("%d", &fate);
		week = fate / WEEKLY ;
		fates = fate % WEEKLY ;
		printf("%d Daye are %d weeks, %d days.\n",fate, week, fates );
	}
	
	return 0;
}
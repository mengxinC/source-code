#include<stdio.h>
#define PRAISE "���Ǹ��Ƿ�����."
int main(void)
{
	char name[40];
	
	printf("��������ǣ�\n ");
	scanf("%s", name);
	printf("���, %s. %s\n", name, PRAISE);
	printf("������ֵ��ַ�����Ϊ%d",strlen(name));

    getchar();
	getchar();	
	return 0;
}
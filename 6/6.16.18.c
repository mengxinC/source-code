#include<stdio.h>
int main (void)
{
   int  size = 0, number = 5;
   printf("��һ��ʼ��%d������\n", number);
   while (number < 151)
   {    
        number = 2 * ( number - ++size );
        printf("��%d�ܣ�����%d������\n", size, number);
   }
   
    getchar();
    return 0;
}
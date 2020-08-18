#include<stdio.h>
int main (void)
{
   int  size = 0, number = 5;
   printf("你一开始有%d个朋友\n", number);
   while (number < 151)
   {    
        number = 2 * ( number - ++size );
        printf("第%d周，你有%d个朋友\n", size, number);
   }
   
    getchar();
    return 0;
}
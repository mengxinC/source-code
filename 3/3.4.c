// 显示字符的代码编�?
#include<stdio.h>
int main(void)
{
    char WSH;

    printf("Please enter a character\n");
    scanf("%c",&WSH);
    printf("The code for %c is %d",WSH,WSH);

    getchar();
    getchar();
    return 0; 
}
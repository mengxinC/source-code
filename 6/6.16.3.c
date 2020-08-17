#include<stdio.h>
int main(void)
{
int size,number = 0;

while(number++ < 6)
{
    size = 70;//ASCII 'F'
    while(size-- > (70 - number))
    printf("%c",size + 1);
    printf("\n");
}

getchar();
getchar();
return 0;
}
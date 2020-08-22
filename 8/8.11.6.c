#include<stdio.h>//返回第一个非空白字符
#include<ctype.h>
int main(void)
{
    char ch;
    int size;

    do
    {
        ch = getchar();
        size = isblank(ch);
    } while (size == 1);
    while (getchar() != '\n')
        continue;
    printf("%c", ch);

    getchar();
    getchar();
    return ch;
}
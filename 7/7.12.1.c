#include<stdio.h>
#define STOP '#'
#define SPACE ' '
#define  NEWLINES '\n'
int main(void)
{
    char ch;
    int n_size = 0, p_size = 0, c_size = 0;

    printf("请输入字符(输入#停止)\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == SPACE)
            n_size++;
        else if (ch == NEWLINES)
            p_size++;
        else
            c_size++;     
    }
    printf("结束，你输入了%d个字符，%d个空格，%d个换行符.\n", c_size, n_size, p_size);

    getchar();
    getchar();
    return 0;
}
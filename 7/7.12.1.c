#include<stdio.h>
#define STOP '#'
#define SPACE ' '
#define  NEWLINES '\n'
int main(void)
{
    char ch;
    int n_size = 0, p_size = 0, c_size = 0;

    printf("�������ַ�(����#ֹͣ)\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == SPACE)
            n_size++;
        else if (ch == NEWLINES)
            p_size++;
        else
            c_size++;     
    }
    printf("��������������%d���ַ���%d���ո�%d�����з�.\n", c_size, n_size, p_size);

    getchar();
    getchar();
    return 0;
}
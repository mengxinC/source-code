#include<stdio.h>
int main(void)
{
    char ch;
    int size = 0;
    int number = 0;
    int average = 0;

    printf("�����뵥��(Ctrl+Z��������)\n");
    while((ch = getchar()) != EOF)
    {
        if (ch != ' ' && ch != '\n')
            size++;
        if (ch == ' ' || ch == '\n')
            number++;
    }
    if (size != 0)
    average = size / number;
    if (size == 0 && number > 0)
        number = 0;
    printf("��������%d������,ƽ��ÿ��������%d����ĸ.\n", number, average);

    getchar();
    return 0;
}
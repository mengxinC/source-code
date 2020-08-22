#include<stdio.h>
int main(void)
{
    char ch;
    int size = 0;
    int number = 0;
    int average = 0;

    printf("请输入单词(Ctrl+Z结束输入)\n");
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
    printf("您输入了%d个单词,平均每个单词有%d个字母.\n", number, average);

    getchar();
    return 0;
}
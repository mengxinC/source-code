#include <stdio.h>

void chline (char, int, int);

int main (void)
{
    char character; //字符
    int i; //行
    int j; //列

    printf("请输入要显示的符号，行数，列\n");
    scanf("%c %d %d", &character, &i, &j);
    chline(character, i, j);

    getchar();
    getchar();
    return 0;
}

//打印模块
void chline (char ch, int i, int j)
{
    int size = 0;
    int number = 0;
    
    while (size++ < i)
    {
        for(number = 0; number < j; number++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("Bye!\n");
}
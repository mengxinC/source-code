#include <stdio.h>

void chline (char, int, int);

int main (void)
{
    char character; //�ַ�
    int i; //��
    int j; //��

    printf("������Ҫ��ʾ�ķ��ţ���������\n");
    scanf("%c %d %d", &character, &i, &j);
    chline(character, i, j);

    getchar();
    getchar();
    return 0;
}

//��ӡģ��
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
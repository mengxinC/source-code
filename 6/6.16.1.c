#include<stdio.h>
#define SIZE 26
int main(void)
{
    char letter[SIZE];
    int let = 0;

    printf("������26��Сд��ĸ.\n");
    scanf("%s", letter);
    while(let++ < SIZE)
    {
        printf("%c\n",letter[let]);
    }
    printf("bye!");
    getchar();
    getchar();
    return 0;
}
#include<stdio.h>
int main (void)
{
    char letter[50];
    int size;

    printf("ÇëÊäÈëÒ»¶Î»°\n");
    scanf("%s", letter);
    size = strlen(letter);
    while(size-- > 0 )
        printf("%c", letter[size]);

    getchar();
    getchar();
    return 0;
}
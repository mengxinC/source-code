// 年龄转换天数
#include<stdio.h>
int main(void)
{
    int Age;

    printf("你的年龄为？\n");
    scanf("%d", &Age);
    printf("I was born now %d Days.\n",Age * 365);
    printf("你出生了 %d 天.\n", Age * 365);

    getchar();
    getchar();
    return 0;
}
#include <stdio.h>

double min (double, double);

int main (void)
{   
    double x, y;

    printf("请输入两个小数\n");
    scanf("%lf %lf", &x, &y);
    printf("两个数中比较小的是%lf\n", min(x, y));

    getchar();
    getchar();
    return 0;
}

double min (double x, double y)
{
    double number;

    if (x > y)
        number = y;
    else
        number = x;

    return number;
}
#include <stdio.h>

double min (double, double);

int main (void)
{   
    double x, y;

    printf("����������С��\n");
    scanf("%lf %lf", &x, &y);
    printf("�������бȽ�С����%lf\n", min(x, y));

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
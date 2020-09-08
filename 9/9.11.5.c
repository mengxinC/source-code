// 把较大的值重新赋值于x， y
#include <stdio.h>

double larger_of (double * replace_x, double * replace_y);

int main (void)
{
    double x;
    double y;
    
    printf("请输入两个小数.\n");
    scanf("%lf %lf", &x, &y);
    larger_of(&x, &y);
    printf("现在x与y的值为%.3lf, %.3lf", x, y);

    getchar();
    getchar();
    return 0;
}

// 比较大小并重新赋值
double larger_of (double * replace_x, double * replace_y)
{
    if ( *replace_x < *replace_y )
        *replace_x = *replace_y;
    else
        *replace_y = *replace_x;
}
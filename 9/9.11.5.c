// �ѽϴ��ֵ���¸�ֵ��x�� y
#include <stdio.h>

double larger_of (double * replace_x, double * replace_y);

int main (void)
{
    double x;
    double y;
    
    printf("����������С��.\n");
    scanf("%lf %lf", &x, &y);
    larger_of(&x, &y);
    printf("����x��y��ֵΪ%.3lf, %.3lf", x, y);

    getchar();
    getchar();
    return 0;
}

// �Ƚϴ�С�����¸�ֵ
double larger_of (double * replace_x, double * replace_y)
{
    if ( *replace_x < *replace_y )
        *replace_x = *replace_y;
    else
        *replace_y = *replace_x;
}
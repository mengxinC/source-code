#include<stdio.h>
#include "7.12.7.h"
int main(void)
{   
    double number, figure, digit, size;
    printf("请输入您每周工作多少小时\n");
    scanf("%lf", &size);
    if (size > 40)       
        number = 400 + BASIC_2 * (size - 40);
    else
        number = BASIC * size;
    if (number <= TAXESK_1)
        figure = number * TAXES_1;
    else if (number <= TAXESK_2)
        figure = (number - TAXESK_1) * TAXES_2 + 45;
    else 
        figure = (number - TAXESK_2) * TAXES_3 + 75; 
    digit = number - figure;
    printf("您本周工资为%.2f 税收为%.2f 税后%.2f\n", number, figure, digit);

    getchar();
    getchar();
    return 0;
}
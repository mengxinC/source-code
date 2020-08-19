#include<stdio.h>
#define BASIC 10.00 //基本工资
#define BASIC_2 15.00 //加班工资
#define TAXES_1 0.15
#define TAXES_2 0.20
#define TAXES_3 0.25
#define TAXESK_1 300
#define TAXESK_2 450
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
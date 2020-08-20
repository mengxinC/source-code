#include<stdio.h>//1988 US federal tax plan
#define TAX_REVENUE 0.15
#define TAX_REVENUE_PASS 0.28
#define SINGLE 17850
#define HEAD 23900
#define MARRIED_SHARE 29750
#define MARRIED_DIVORCE 14875
#define STOP 0
int main(void)
{
    int size;//税收种类
    double income, taxes;
        // 收入    税收
    printf("请选择您的税收种类和收入(输入0退出).\n");
    printf("   1.单身         2.户主   \n");
    printf("   2.已婚共有     3.已婚离异     \n");
    scanf("%d %lf", &size, &income);
    while(size != STOP)
    {
        if (size == 1)
        {
            if (income <= SINGLE)
                taxes = income * TAX_REVENUE;
            else
                taxes = (income - SINGLE) * TAX_REVENUE_PASS + (SINGLE * TAX_REVENUE);
        }
        if (size == 2)
        {
            if (income <= HEAD)
                taxes = income * TAX_REVENUE;
            else 
                taxes = (income - HEAD) * TAX_REVENUE_PASS + (HEAD * TAX_REVENUE);
        }
        if (size == 3)
        {
            if (income <= MARRIED_SHARE)
                taxes = income * TAX_REVENUE;
            else
                taxes = (income - MARRIED_SHARE) * TAX_REVENUE_PASS + (MARRIED_SHARE * TAX_REVENUE);
        }
        if (size == 4)
        {
            if (income <= MARRIED_DIVORCE)
                taxes = income * TAX_REVENUE;
            else   
                taxes = (income - MARRIED_DIVORCE) * TAX_REVENUE_PASS + (MARRIED_DIVORCE * TAX_REVENUE);
        }
        printf("您的税金为%.2f\n", taxes);
        printf("请选择您的税收种类和收入(输入0退出).\n");
        printf("   1.单身         2.户主   \n");
        printf("   2.已婚共有     3.已婚离异     \n");
        scanf("%d %lf", &size, &income);
    }

    getchar();
    getchar();
    return 0;
} 
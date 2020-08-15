#include<stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weiht in platinum??\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pounds:");

    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("Your are easily worth that! if platnum prices drop,\n");
    printf("eat more to mmaintain your value.\n");
    
    getchar();
    getchar();
    return 0;
}
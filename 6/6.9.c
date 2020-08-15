#include<stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("please enter an intger to be summed");
    printf("(q to quit) :  ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;
        printf("please enter next integer (q to quit) :");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integrs sum to %ld.\n", sum);

    return 0;
}
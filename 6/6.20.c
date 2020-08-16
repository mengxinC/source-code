#include<stdio.h>
double power(double n, int p);
int main (void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");    
    printf(" to quit .\n");
    while (scanf("%1f%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbera or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    getchar();
    getchar();
}

double power (double n, int p)
{
    double pow = 1;
    int i;

    for(i = 1; i <= p; i++)
        pow *= n;

        return pow;
}
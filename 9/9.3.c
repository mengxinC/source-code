#include <stdio.h>
int imin(int, int);

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of integers (q to quit) : \n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        if (evil1 == evil2)
        {
            printf("These two numbers are the same size, please re-enter\n");
            continue;
        }
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit) : \n");
    }
    printf("Bye.\n");

    getchar();
    return 0;
}

int imin(int n, int m)
{
    int min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}
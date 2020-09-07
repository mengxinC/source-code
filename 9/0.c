#include <stdio.h>
int main (void)
{
    int a = 5;
    int b = 2;
    int * c;
    int d;

    c = &a;
    d = *c;

    printf("%d", d);

    getchar();
    return 0;
}
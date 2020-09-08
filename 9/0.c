#include <stdio.h>
int main (void)
{
    int a = 5;
    int * c;
    int d;

    c = &a;
    d = *c;

    printf("%d", d);

    getchar();
    return 0;
}
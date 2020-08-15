#include<stdio.h>
void smile(void);
void smile_two(void);
int main(void)
{
    smile();
    smile();
    smile_two();
    smile();
    smile_two();
    smile();

    getchar();
    return 0;
}

void smile(void)
{
    printf("smile!");
}
void smile_two(void)
{
    printf("smile!\n");
}
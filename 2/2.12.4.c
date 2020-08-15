#include<stdio.h>
void jollu(void);
void deny(void);
int main(void)
{
    jollu();    
    jollu();    
    jollu();    
    deny();

    getchar();
    return 0;
}

void jollu(void)
{
    printf("For he's a jollu good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
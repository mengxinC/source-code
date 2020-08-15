#include<stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
    int index = 0, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf score:\n", SIZE);
    while (index++ < SIZE)
    {    
        scanf("%d", &score[index]);
        printf("%5d", score[index]);
        sum += score[index];
    }      
    printf("The scores read in are as follows:\n");
    average = (float) sum / SIZE;
    printf("Sum of scores =%d, average = %.2f\n",sum, average);        
    printf("That's a handicap of %.0f.\n", average - PAR);

    getchar();
    getchar();
    return 0;
}
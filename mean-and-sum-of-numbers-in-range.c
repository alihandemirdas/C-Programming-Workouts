#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sum=0;
    printf("Starting number: ");
    scanf("%d",&i);
    k=i;
    printf("End number(not included): ");
    scanf("%d",&j);
    for(i; i<j; i++)
    {
        printf("%d, ",i);
        sum+=i;
    }
    float mean = (double)sum / (j-k);
    printf("\nSum: %d, Mean: %.2f",sum,mean);

    return 0;
}

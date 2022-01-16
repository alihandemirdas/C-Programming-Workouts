#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp=0;
    printf("Number: ");
    scanf("%d",&i);

    while(i!=0)
    {
        i /= 10;
        temp++;
    }

    printf("Number of Digits: %d", temp);


    return 0;
}

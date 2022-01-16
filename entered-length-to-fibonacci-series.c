#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,firstNumber=0,secondNumber=1,thirdNumber;
    printf("Length of Fibonacci: ");
    scanf("%d",&j);

    if(j!=1)
        printf("%d, %d, ",firstNumber,secondNumber);
    else
    {
        printf("%d ",firstNumber);
        exit(0);
    }



    for(i=0; i<j; i++)
    {
        thirdNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
        printf("%d, ",thirdNumber);
    }

    return 0;
}

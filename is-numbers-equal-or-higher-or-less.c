#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber;
    printf("Enter first number: ");
    scanf("%d",&firstNumber);

    printf("Enter second number: ");
    scanf("%d",&secondNumber);

    if(firstNumber>secondNumber)
        printf("First number is higher than second number.");
    else if(firstNumber<secondNumber)
        printf("First number is less than second number.");
    else
        printf("The numbers are equal.");

    return 0;
}

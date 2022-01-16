#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    printf("Enter first number: ");
    scanf("%d",&firstNumber);

    printf("Enter second number: ");
    scanf("%d",&secondNumber);

    printf("Enter third number: ");
    scanf("%d",&thirdNumber);

    if(firstNumber>secondNumber && firstNumber>thirdNumber)
        printf("First number is the biggest.");
    else if(secondNumber>firstNumber && secondNumber>thirdNumber)
        printf("Second number is the biggest.");
    else
        printf("Third numbers is the biggest.");

    return 0;
}

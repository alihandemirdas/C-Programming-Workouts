#include <stdio.h>
#include <stdlib.h>

int main()
{
    long number,result=1;
    printf("Enter the number to be calculated factorial: ");
    scanf("%d",&number);

    while(number!=1)
    {
        result *= number * (number-1);
        number -= 2;
        if(number==0)
            break;
    }
    printf("%d",result);
    return 0;
}

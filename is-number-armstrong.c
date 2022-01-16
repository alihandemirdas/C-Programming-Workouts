#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,result,sum=0,original,n=0,temp;
    printf("Number: ");
    scanf("%d",&number);

    original = number;
    result = original;


    for(number; number !=0; n++)
    {
        number /= 10;
    }

    while(original != 0)
    {
        temp = original %10;
        sum += pow(temp,n);
        original /=10;
    }

    if(sum==result)
        printf("Yes, It is armstrong.");

    else
        printf("No, It is not armstrong.");




    return 0;
}

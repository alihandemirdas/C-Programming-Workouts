#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, x, i=1;
    int binary=0;
    printf("Enter number in decimal number system: ");
    scanf("%d",&number);

    while(number!=0)
    {
        x = number %2;
        binary += (x*i);
        number /= 2;
        i*=10;
    }
    printf("%d",binary);
    return 0;
}

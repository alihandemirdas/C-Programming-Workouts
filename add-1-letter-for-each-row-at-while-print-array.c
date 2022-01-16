#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,big,index;
    char array[30];
    printf("Enter text: ");
    gets(array);

    int boyut = strlen(array);

    for(i=1; i<=boyut; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c",array[j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,big,index,temp;
    int array[10] = {24,57,45,36,5,42,17,98,42,26};
    int boyut = sizeof(array) / sizeof(array[0]);

    for(i=0; i<boyut; i++)
    {
        if(array[i]>array[i+1])
        {
            if(i==0)
            {
                big = array[i];
                index = i;
            }
            if(array[i]>big)
            {
                big = array[i];
                index = i;
            }

        }

    }
    printf("%d and %d",big,index);

    return 0;
}

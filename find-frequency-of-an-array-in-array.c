#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,toplam=0;
    int dizi1[20] = {1,2,3,6,5,8,9,1,2,3,6,1,7,8,0,1,2,3};
    int dizi2[3] = {1,2,3};
    int boyut1 = sizeof(dizi1) / sizeof(int);
    printf("Index:");

    for(i=0; i<boyut1; i++)
    {
        if(dizi1[i]==dizi2[j] && dizi1[i+1]== dizi2[j+1] && dizi1[i+2]==dizi2[j+2])
        {
            toplam+=1;
            printf("%d-%d, ",i,i+2);
            i+=3;
        }
    }

    printf("Frekans: %d",toplam);

}


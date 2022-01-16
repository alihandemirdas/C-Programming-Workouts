#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int i,j;
    char harf,tahmin,enter;

    srand(time(NULL));
    harf=rand()%25+65;

    for(i=1; i<=10; i++)
    {

        printf("Tahminini yaz: ");
        scanf("%c",&tahmin);
        scanf("%c",&enter);

        if(tahmin==harf)
            printf("\nDogru tahmin! %d. sansta buldunuz.\n",i);
        else
            printf("Yanlis tahmin!\n");
    }

    printf("\nHakkiniz bitti!\n");
    printf("Dogru harf: %c",harf);

    getch();
    return 0;
}

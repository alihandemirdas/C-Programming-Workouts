#include<stdio.h>
#include<conio.h>

main()
{
    int i,sayi,sayac=0;
    yeniden:
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    if(sayi==1)
    {
        printf("1 sayisi asal degildir. Yeniden deneyiniz\n");
        goto yeniden;
    }

    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
            sayac++;
    }

    if(sayi==1)
        goto yeniden;


    if(sayac==0)
        printf("%d sayisi Asal\n",sayi);

    else
        printf("%d sayisi Asal degil\n",sayi);



    for(i=2; i<sayi; i++)
    {
        if((2*sayi+1)%i==0 && sayi%i==0)
            sayac++;

    }

    if(sayac==0)
        printf("%d sayisi Germain Asal\n",sayi);

    else
        printf("%d sayisi Germain Asal Degil",sayi);

    getch();
}

//Alihan Demirdaş - 20010011054
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int menu,menu1,menu2,sayi1,sayi2,sonuc,secim;
    float karekok_sonuc,logaritma_sonuc,sayi1_karekok,sayi1_bol,sayi2_bol,sonuc_bol;
    double sayi1_log,sayi2_log;

    printf("--- Hesap Makinesi ---\n");

    while(1==1)
    {
        printf("\nBasit Mod -> 1;\nGelismis Mod -> 2;\nCikis yap -> 3;\n\nHesap makinesi modunu seciniz: ");
        scanf("%d",&menu);

        switch(menu)
        {
        case 1:
            while(1==1)
            {
                printf("\nToplama -> 1;\nCikarma -> 2;\nCarpma -> 3;\nBolme -> 4;\nMod Menusu -> 5;\nYapmak istediginiz islemi seciniz: ");
                scanf("%d",&menu1);

                if(menu1==5)
                {
                    break;
                }

                switch(menu1)
                {
                case 1:
                    while(1==1)
                    {
                        printf("\nToplamak istediginiz 1.sayiyi giriniz: ");
                        scanf("%d",&sayi1);
                        printf("Toplamak istediginiz 2.sayiyi giriniz: ");
                        scanf("%d",&sayi2);
                        sonuc = sayi1 + sayi2;
                        printf("Sonuc: %d\n",sonuc);

                        printf("\nYeni bir toplama islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }

                    }
                    break;
                case 2:
                    while(1==1)
                    {
                        printf("\nCikarmak istediginiz 1.sayiyi giriniz: ");
                        scanf("%d",&sayi1);
                        printf("Cikarmak istediginiz 2.sayiyi giriniz: ");
                        scanf("%d",&sayi2);
                        sonuc = sayi1 - sayi2;
                        printf("Sonuc: %d\n",sonuc);

                        printf("\nYeni bir cikarma islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }

                    }
                    break;
                case 3:
                    while(1==1)
                    {
                        printf("\nCarpmak istediginiz 1.sayiyi giriniz: ");
                        scanf("%d",&sayi1);
                        printf("Carpmak istediginiz 2.sayiyi giriniz: ");
                        scanf("%d",&sayi2);
                        sonuc = sayi1 * sayi2;
                        printf("Sonuc: %d\n",sonuc);

                        printf("\nYeni bir carpma islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }

                    }
                    break;
                case 4:
                    while(1==1)
                    {
                        printf("\nBolmek istediginiz 1.sayiyi giriniz: ");
                        scanf("%f",&sayi1_bol);
                        printf("Bolmek istediginiz 2.sayiyi giriniz: ");
                        scanf("%f",&sayi2_bol);
                        sonuc_bol = sayi1_bol / sayi2_bol;
                        printf("Sonuc: %.2f\n",sonuc_bol);

                        printf("\nYeni bir bolme islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }

                    }
                    break;

                default:
                    printf("\nYanlis secim yaptiniz, yeniden deneyin.\n");
                    break;
                }
            }
            continue;

            break;
        case 2:
            while(1==1)
            {
                printf("\nMod Al -> 1;\nKarekok Al -> 2;\nUs Al -> 3;\nLogaritma -> 4;\nMod Menusu   -> 5;\nYapmak istediginiz islemi seciniz: ");
                scanf("%d",&menu2);

                if(menu2==5)
                {
                    break;
                }

                switch(menu2)
                {
                case 1:
                    while(1==1)
                    {
                        printf("\nModunu almak istediginiz sayiyi giriniz: ");
                        scanf("%d",&sayi1);
                        printf("Mod sayisini giriniz: ");
                        scanf("%d",&sayi2);
                        sonuc = sayi1 % sayi2;
                        printf("%d sayisinin %d ile modu: %d\n",sayi1,sayi2,sonuc);

                        printf("\nYeni bir mod islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }
                    }
                    break;
                case 2:
                    while(1==1)
                    {
                        printf("\nKarekok almak istediginiz sayiyi giriniz: ");
                        scanf("%f",&sayi1_karekok);

                        karekok_sonuc = sqrt(sayi1_karekok);

                        printf("%.0f sayisinin karekoku: %.2f\n",sayi1_karekok,karekok_sonuc);

                        printf("\nYeni bir karekok islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }
                    }
                    break;
                case 3:
                    while(1==1)
                    {
                        int i;
                        sonuc=1;
                        printf("\nUssunu almak istediginiz sayiyi giriniz: ");
                        scanf("%d",&sayi1);
                        printf("Us sayisini giriniz: ");
                        scanf("%d",&sayi2);

                        for(i=0; i<sayi2; i++)
                        {
                            sonuc = sonuc*sayi1;
                        }

                        printf("Sonuc: %d\n",sonuc);

                        printf("\nYeni bir us alma islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }
                    }
                    break;
                case 4:
                    while(1==1)
                    {
                        sonuc=1;
                        printf("\nLogaritmasini almak istediginiz sayiyi giriniz: ");
                        scanf("%lf",&sayi1_log);
                        printf("Taban sayisi giriniz: ");
                        scanf("%lf",&sayi2_log);

                        logaritma_sonuc = log10(sayi1_log) / log10(sayi2_log);

                        printf("%.0f sayisinin %.0f tabaninda logaritmasi: %.2f\n",sayi1_log,sayi2_log,logaritma_sonuc);

                        printf("\nYeni bir mod islemi ->1\nBir onceki menu ->2\n -> ");
                        scanf("%d",&secim);

                        if(secim == 1)
                        {
                            continue;
                        }
                        if(secim == 2)
                        {
                            break;
                        }
                        else
                        {
                            printf("Yanlis bir secim yaptiniz, yeniden deneyin\n");
                            break;
                        }
                    }
                    break;

                default:
                    printf("\nYanlis secim yaptiniz, yeniden deneyin.\n");
                    break;
                }

            }
            continue;

        case 3:
            break;

        }
        break;
    }
}

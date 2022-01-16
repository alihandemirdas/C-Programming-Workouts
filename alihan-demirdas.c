#include <stdio.h>
#include <stdlib.h>
#define boyut 10
//Alihan Demirdas - 20010011054

void a_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(a==1 || b==1 || b==boyut-1 || a==boyut/2)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void l_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(b==1 || a==boyut-1)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void i_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(a==1 || a==boyut-1 || b==boyut/2)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void h_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(b==1 || b==boyut-1 || a==boyut/2)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void n_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(b==1 || b==boyut-1 || a==b)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void d_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if((a==boyut-1 && b<boyut*2/5+1) || (a+b-boyut/2==boyut-1) || (a==1 && b<boyut*2/5+1) || b==1 || (a==b-boyut*2/5))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void e_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(a==1 || a==boyut-1 || a==boyut/2 || b==1)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void m_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(b==1 || b==boyut-1 || (a==b && b<boyut/2+2/3) || (a+b==boyut-1 && b>boyut/2-1) || (a+b==boyut/2 && b>boyut/2-1))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void r_harfi()
{
    int a,b;
    for(a=1 ; a<boyut ; a++)
    {
        for(b=1 ; b<boyut ; b++)
        {
            if(a==1 || b==1 ||a==boyut/2 || b==boyut-1 && a<=boyut/2-1 || a==b && a>boyut/2)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

void s_harfi()
{
    int a,b;
    for(a=1; a<boyut; a++)
    {
        for(b=1; b<boyut; b++)
        {
            if(a==1 || b==1/2 || (b==1 && a<boyut/2) || (b==boyut-1 && a>boyut/2) || a==boyut/2 || a==boyut-1)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    //int boyut;
    //printf("Bir boyut giriniz: ");
    //scanf("%d",&boyut);
    //ödev þartýnda boyut sabit olacak denildigi icin define olarak tanýmladým.
    printf("Boyutu degistirmek icin define boyut kismini degistirebilirsiniz.\n\n");
    printf("\n");
    a_harfi();
    printf("\n\n");
    l_harfi();
    printf("\n\n");
    i_harfi();
    printf("\n\n");
    h_harfi();
    printf("\n\n");
    a_harfi();
    printf("\n\n");
    n_harfi();
    printf("\n\n\n\n");
    d_harfi();
    printf("\n\n");
    e_harfi();
    printf("\n\n");
    m_harfi();
    printf("\n\n");
    i_harfi();
    printf("\n\n");
    r_harfi();
    printf("\n\n");
    d_harfi();
    printf("\n\n");
    a_harfi();
    printf("\n\n");
    s_harfi();
    printf("\n\n");
}



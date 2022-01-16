#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int i,sayi,tahmin;

	srand(time(NULL));
	sayi=1+rand()%99;

	for(i=1;i<=99;i++){

		printf("Tahminini gir: ");
		scanf("%d",&tahmin);

		if(tahmin<sayi)
			printf("Daha buyuk girmelisin\n");
		else if(tahmin>sayi)
			printf("Daha kucuk girmelisin\n");
		else{
			printf("\nDogruuu!!! %d. tahminde dogru sayi bulundu.\n\n",i);
        	break;
		}
	}

	getch();
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int n,a[20],i,j,gecici;

	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);

	printf("Dizinin elemanlarini giriniz: ");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(j=0;j<n-1;j++){
			for(i=j+1;i<n;i++){
			   	if(a[j]>a[i]){
					gecici=a[j];
					a[j]=a[i];
					a[i]=gecici;
			}
		}
	}

	printf("Yeni dizi: ");
		for(j=0;j<n;j++)
			printf("%d  ",a[j]);

	getch();
	return 0;
}

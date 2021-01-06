#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,e;
	printf("Jumlah Baris: ");
	scanf("%i", &e);
	for (a=1;a<=e;a++){
		for (b=e;b>=a;b--){
			printf(" ");
		}
		for (c=1;c<=a;c++){
			printf(" *");
		}
		printf("\n");
	}
	for (a=e-1;a<=e+1;a++){
		for (b=e;b>=a;b--){
			printf(" ");
		}
		for (c=1;c<=a;c++){
			printf(" *");
		}
		printf("\n");
	}
	for (a=1;a<=1;a++){
		for (b=e;b>=1;b--){
			printf(" ");
		}
		printf(" *");
	}
}








#include<stdio.h>

int cari(){
	int a1,a2,a3;
	
	printf("Masukkan Angka 1: ");
	scanf("%d", &a1);
	
	printf("Masukkan Angka 2: ");
	scanf("%d", &a2);
	
	printf("Masukkan Angka 3: ");
	scanf("%d", &a3);
	
	if (a1>a2){
		if(a1>a3){
			printf("%d lebih besar dari %d dan %d\n", a1,a2,a3);
		} else {
		    printf("%d lebih besar dari %d dan %d\n", a3,a2,a1);
		}
	} else if (a2>a3){
		printf("%d lebih besar dari %d dan %d\n", a2,a1,a3);
	} else {
		printf("%d lebih besar dari %d dan %d\n", a3,a2,a1);
	}
	return 0;
}



int cari2(){
	int a1,a2,a3,terbesar;
	
	printf("Masukkan 3 angka yang berbeda: ");
	scanf("%d %d %d", &a1,&a2,&a3);
	
	terbesar =((a1>a2 && a1>a3)?a1: (a2>a3)?a2:a3);
	
    printf("Angka terbesar = %d \n",terbesar);
    
    return 0;
}

int main(){
	cari();
	cari2();
}





#include<stdio.h>

int cari(){
	int a1,a2;
	printf("Masukkan 2 angka yang berbeda: ");
	scanf("%d %d", &a1,&a2);
	
	if (a1>a2){
		printf("%d lebih besar dari %d\n", a1,a2);
	} else if (a2>a1){
		printf("%d lebih besar dari %d\n", a2,a1);
	} else {
		printf("Angka yang dimasukkan sama\n");
	}
	return 0;
}

//ternarycondition
int cari2(){
	int a1,a2;
	
	printf("Masukkan 2 angka yang berbeda: ");
	scanf("%d %d", &a1,&a2);
	
	(a1 >= a2)?((a1==a2)?printf("Angka yang dimasukkan sama\n"):
	printf("%d lebih besar dari %d\n", a1,a2)):printf("%d lebih besar dari %d\n", a2,a1);
    return 0;
}

int main(){
	cari();
	cari2();
}







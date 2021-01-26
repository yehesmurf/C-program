#include<stdio.h>

int tambah(){
	
	int angka1,angka2,jumlah;
	
	printf("Masukkan angka ke-1 dan angka ke-2: \n");
	scanf("%d%d", &angka1, &angka2);
	
	jumlah = angka1+angka2;
	
	printf("Hasilnya adalah %d\n", jumlah);
	
	return 0;
}

//Function
int tambaha1a2(int a, int b){
	return(a+b);
}

int tambah2(){
	
	int angka1,angka2,jumlah;
	
	printf("Masukkan angka ke-1 dan angka ke-2: \n");
	scanf("%d%d", &angka1, &angka2);
	
	jumlah = tambaha1a2(angka1,angka2);
	
	printf("Hasilnya adalah %d\n", jumlah);
	
	return 0;
}

int main(){
	tambah();
	tambah2();
}

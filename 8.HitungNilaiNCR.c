#include <stdio.h>


int fact(int n){
    int i;
    int res = 1;
    for (i = 2; i <= n; i++){
        res = res * i;
    }
    return res;
}

int getnCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}


int main (){
	int angka, r;
	long nilaincr;
	
	printf("Masukkan angka  : ");
	scanf("%d",&angka);
	
	printf("Masukkan nilai r: ");
	scanf("%d",&r);
	
	nilaincr = getnCr(angka,r);
	
	printf("%d C %d = %d\n",angka,r,nilaincr);
	
	return 0;
}





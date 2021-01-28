#include <stdio.h>

int fact(int n){
	int i;
	int res = 1;
	for (i=2;i<=n;i++){
		res = res*i;
	}
	return res;
}

int npr(int n, int r){
	return fact(n)/fact(n-r);
}

int main(){
	int angka, r;
	long nilainpr;
	
	printf("Masukkan angka   : ");
	scanf("%d", &angka);
	
	printf("Masukkan nilai r : ");
	scanf("%d", &r);
	
	nilainpr = npr(angka,r);
	
	printf("%d C %d = %d\n",angka,r,nilainpr);
	
	return 0;
}




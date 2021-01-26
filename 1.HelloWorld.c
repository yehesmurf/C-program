#include<stdio.h>

int hello1(){
	
	printf("Hello World\n");
	
	return 0;
}

int hello2(){
	
	char a = 'H', b = 'e', c = 'l', e = 'o';
	char f = 'W', h = 'r', j = 'd';
	
	printf("%c%c%c%c%c %c%c%c%c%c\n",a,b,c,c,e,f,e,h,c,j);
	
	return 0;
}

int main(){
	hello1();
	hello2();
}

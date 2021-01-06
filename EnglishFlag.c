#include <stdio.h>

//BY YEHESMURF
//@ HEZKY_R

void red () {
  printf("\033[1;31m");
}

void yellow () {
  printf("\033[0;33m");
}

void blue (){
	printf("\033[0;34m");
}

void white () {
	printf("\033[0;37m");
}

void reset () {
  printf("\033[0m");
}

int pilih1(){
	char jawab;
	white();
	printf("\n English Flag \n");
	printf("\n Mau ganti warna? Y or N: ");
	scanf(" %c", &jawab);
	while (jawab == 'Y' || jawab == 'y'){
		printf("\n OK \n");
		system("cls");
		menu();
		white();
		printf("\n Mau lagi? Y or N: \n");
		printf("\n Mau ganti warna? ");
		scanf(" %c", &jawab);
	} 
	printf("\n Thankyou guys!");
	exit(0);
}

int menu(){
	char pilih;
	printf(" 1. Gambar Original\n");
	printf(" 2. Gambar Full Merah\n");
	printf(" 3. Gambar Full Putih\n");
	printf(" 4. Gambar Animasi\n\n");
	printf(" Pilih : ");
	scanf(" %d", &pilih);
	printf("\n");
	if (pilih == 1){
		flags();
		pilih1();
	} else if (pilih == 2){
		flags1();
		pilih1();
	} else if (pilih == 3){
		flags2();
		pilih1();
	} else if (pilih == 4){
		int v;
		for (v;v<=50;v++){
			system("cls");
			flagsRainbow();
			system("cls");
			flagsRainbow1();
			system("cls");
			flagsRainbow2();
			system("cls");
		}
		white();
		menu();
	}else {
		system("cls");
		menu();
	}
}

int flags(a,b,c) {
	system("COLOR 0");
	printf("Masukkan Angka: ");
	scanf("%i", &a);
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			blue();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			blue();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

int flags1(a,b,c) {
	system("COLOR 0");
	printf("Masukkan Angka: ");
	scanf("%i", &a);
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			red();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			red();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

int flags2(a,b,c) {
	system("COLOR 0");
	printf("Masukkan Angka: ");
	scanf("%i", &a);
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			white();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			white();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

int flagsRainbow(a,b,c) {
	system("COLOR 0");
	a=7;
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			blue();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			blue();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			blue();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			blue();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

int flagsRainbow1(a,b,c) {
	a=7;
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			red();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			red();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			red();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			red();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

int flagsRainbow2(a,b,c) {
	a=7;
	printf("\n");
	for(b=1; b<=a; b++){
		//well layout
		for(c=2; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
			red();
    		printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		red();
		printf("& ");
		for(c=a; c>=b; c--){
			white();
			printf("* ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=2; c<=b; c++){
			white();
			printf("# ");
		}
	printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=a-1; b<=a; b++){
		for(c=1; c<=a*4+10; c++){
			red();
			printf("& ");
		}
		printf("\n");
	}
	for(b=a; b<=a; b++){
		for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}for(c=1; c<=2; c++){
			red();
			printf("& ");
		}for(c=1; c<=a*2+4; c++){
			white();
			printf("* ");
		}
		printf("\n");
	}
	for(b=1; b<=a; b++){
		for(c=a-1; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		white();
		printf("* ");
		for(c=a-1; c<=a; c++){
    		red();
			printf("& ");
  		}
  		white();
  		printf("* ");
		for(c=1; c<=b; c++){
			white();
			printf("# ");
		}
		for(c=1; c<=b; c++){
			white();
			printf("* ");
		}
		red();
		printf("& ");
		white();
		printf("* ");
		for(c=a; c>=b; c--){
			white();
			printf("# ");
		}
		for(c=a-1; c>=b; c--){
			white();
			printf("# ");
		}
			//well layout
	printf("\n");
	}
}

void main(){
	flags();
	pilih1();
}


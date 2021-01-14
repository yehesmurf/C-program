#include <stdio.h>

//bikin jeda
void jeda(unsigned int nilai){
	unsigned int h1=0;
	unsigned int h2=0;
	
	for (h1=0; h1<nilai; h1++){
		for (h2=0; h2<h1; h2++){
			
		}
	}
}


//ini roket-nya 
const  char roket[] =
		   "                                 ^\n"
		   "                                |-|\n"
		   "                                | |\n"
		   "                                |S|\n"
		   "                                |P|\n"
		   "                                |A|\n"
		   "                                |C|\n"
		   "                               /|E|\\\n"
		   "                              / | | \\\n"
		   "                             |  |X|  |\n"
		   "                              '_ ' _'\n"
		   "                               *|*|*\n";
		   

int menu(){
	int controlbawah=0;
	const int jeda2=7000;
	int control=0;
	
	//push letak roket kebawah
	for (controlbawah=0; controlbawah<40; controlbawah++){
		printf("\n");
	} 
	
	//nampilin roketnya
	
	fputs(roket,stdout);
	
	for (control=0; control<40; control++){
		//roket keatas berjeda
		jeda(jeda2);
		//push roket naik
		printf("\n");
	}
	return 0;
}

int main (){
	int i,k=2;
	for (i=0;i<=k;i++){
		menu();
	}
	printf("let's fly higher!");
}

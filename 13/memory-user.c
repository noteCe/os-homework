#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(int argc, char *argv[]) {
	
	char* p;
	long arg1 = strtol(argv[1],&p,10);
	if(*p!= '\0') printf("geçersiz girdi");
	long arg2 = strtol(argv[2],&p,10);
	if(*p!= '\0') printf("geçersiz girdi");

	int bellek_mb = (int) arg1;
	int dongu_tekrar = (int) arg2;

	printf("mb %d \n",bellek_mb);
	printf("dongu tekrar %d \n",dongu_tekrar);

	
	int bellek_byte = (int) (bellek_mb*1024*1024);
	int eleman_byte = (int) bellek_byte/dongu_tekrar;
	
	int *k;
	k = (int*) malloc(dongu_tekrar*eleman_byte);
	
	for(int i=0;i<dongu_tekrar;i++){
		*(k+i) = 1;
		printf("%d.bellek alanı : %d \n",i,*(k+i));			
	}
	
	while(bellek_mb<1200){
	
	}

	
	

	


}

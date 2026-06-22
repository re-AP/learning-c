#include <stdio.h>

/* A table to print centigrade temp value after converting from fahrenheit temp values */
int main (void){
	int fahr;

	for(fahr = 0; fahr <= 300 ; fahr = fahr + 20){
		printf("%3.0d\t%6.1f\n" , fahr , (5.0/9.0)*(fahr - 32));

	}

}

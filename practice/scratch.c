#include <stdio.h>

/* A table to print centigrade temp value after converting from fahrenheit temp values */
int main (void){
	int lower , upper , step ;
	float fahr , cels ;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= 300){
		cels = (5.0/9.0)*(fahr - 32.0);
		printf("%f\t%f\n", fahr, cels);
		fahr = fahr + step;
	}

}

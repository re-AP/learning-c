#include<stdio.h>

int main(void){
	int lower , upper , step;
	float fahr , cels ;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Converting Fahrenheit into Celsius \n");

	while( fahr <= upper ){
		cels = (5.0/9.0)*(fahr - 32.0);
		printf("%3.1f\t%6.1f\n" ,fahr ,cels );
		fahr = fahr + step ;

	}

}

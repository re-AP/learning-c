#include<stdio.h>

int main(void){
	int lower , upper , step;
	float fahr , cels;

	lower = 0;
	upper = 300;
	step = 20;

	cels = lower;
	printf("Converting Celsius into Fahrenheit \n");

	while( cels <= upper ){
		fahr = ((9.0 * cels / 5.0) + 32.0);
		printf("%3.1f\t%6.1f\n" , cels, fahr);
		cels = cels + step;
	}
}

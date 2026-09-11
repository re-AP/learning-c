#include<stdio.h>

float tempconv (float fahr);

int main(void){
	float fahr ;

	for(fahr = 0 ; fahr < 300 ; fahr = fahr + 20){
		printf("%3f , %6.1f \n" , fahr , tempconv(fahr));
	}
	
}
float tempconv(float fahr){
	float cels;

	cels =(5.0 /9.0 )*(fahr - 32.0);
	return cels ;
}

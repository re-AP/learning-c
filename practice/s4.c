#include<stdio.h>

int power (int m , int n);
/* power function above */

int main(void){

	int c = 2 ;

	printf("%d \n",power(c,3));
	printf("%d \n" , c);
}

int power(int base , int pow){
	int p , i ;
	
	p = 1;
	for (i = 1 ; i <= pow ; ++i){
		p = p * base;
	}
	base = 100 ;
	return p;
}

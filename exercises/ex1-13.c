#include<stdio.h>

#define IN 1
#define OUT 0


int main(void){
	int lettercount[10];

	int c , letter , state ;
	state = OUT;

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else{
			state = IN;
			++letter;
			lettercount[letter]++
			}
		}
	}


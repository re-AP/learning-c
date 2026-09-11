#include<stdio.h>

#define IN 1
#define OUT 0

int main(void){
	int c , nc , nw , nl , state;

	nl = nc  = nw = 0;
	state = OUT;

	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++nl;
		}
	        if(c == ' ' || c == '	' || c == '\n')
			state = OUT ;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n" , nl , nc , nw);
}

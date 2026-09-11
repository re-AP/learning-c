#include <stdio.h>

int main(void){
	int c , s;

	s = 0 ;
	while((c = getchar()) != EOF){
		if(c == ' ' && s == 0){
			s = 1;
			putchar(c);
		}
		else if(c == ' ' && s == 1){
			;
		}
		else
		{
			s = 0;
			putchar(c);
		}
	}


}

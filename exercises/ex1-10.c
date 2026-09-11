#include<stdio.h>


int main(void){
	int  c;


	while((c = getchar()) != EOF ){
		if(c == '	'){
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b'){
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		else{
			putchar(c);
		}
	}
}

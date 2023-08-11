#include <stdlib.h>
#include <stdio.h>


int main (int argc, const char *argv[]) {
	int a, b, c, i;
	
	a = 0b101;
	b = 0b010;
	c = 0b100;
	
	// c = c >> 1;
	// c passa a ser 010;
	
	// c = c >> 2;
	// c passa a ser 001;
	
	// operadores bituais
	// &, |, ~
	
	// %X para escrever hexadecimal
	printf("%X", a | b);
	printf("\n");
	printf("%X", a || b);
	
	

			
	return 0;
}

#include <stdlib.h>
#include <stdio.h>


int main (int argc, const char *argv[]) {
	int a, b, i;
	
	a = 0b101;
	b = 0b010;
	
	// %X para escrever hexadecimal
	printf("%X", a | b);
	printf("\n");
	printf("%X", a || b);
	
	

			
	return 0;
}

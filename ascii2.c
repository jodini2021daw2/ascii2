//Autor: jordidiaznieto
//Data: 22-02-21
#include <stdio.h>

int main() {
	char c;
	int n,i;
		
	printf("TAULA ASCII MAJÃšSCULES 07-02-2020\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=n;i>=0;i--) {
		c='A'+i;
		printf("%c	%x	%d\n", c+32, c+32, c+32);
		printf("%c    %x   %d\n",c,c,c);
	}
	return(0);
}

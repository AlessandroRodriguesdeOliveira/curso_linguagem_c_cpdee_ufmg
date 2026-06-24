#include <stdio.h>

#define IMPAR(A) ( (A % 2) ? 1 : 0 )

int main(void){
	int eImpar;

	printf("Vou dizer se e impar: ");
	scanf("%d",&eImpar);

	printf("%d\n", IMPAR(eImpar));

	return 0;
} 

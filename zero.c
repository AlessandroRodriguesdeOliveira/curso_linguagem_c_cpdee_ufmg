#include <stdio.h>

void zero(int *a, int *b){
	*a = 0;
	*b = 0;
}

int main(void){
	int num1, num2;

	printf("Entre com um numero: ");
	scanf("%d", &num1);

	printf("Entre com outro numero: ");
	scanf("%d", &num2);

	zero(&num1, &num2);

	printf("\nZeramos seus numeros passados");
	printf("\nnum1: %d, num2: %d\n", num1, num2);

	return 0;
}

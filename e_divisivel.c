#include <stdio.h>

int e_divisivel(int a, int b){
	if(a % b){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int numerador, divisor, resultado;
	
	printf("Entre com o numerador: ");
	scanf("%d", &numerador);
	
	printf("Entre com o disivor: ");
	scanf("%d", &divisor);

	resultado = e_divisivel(numerador, divisor);
	
	if(resultado){
		printf("\nO numero e divisivel\n");
	}else{
		printf("\nO numero nao e divisivel\n");
	}
	return 0;
}

#include <stdio.h>

void le_vetor(int *vet, int dimensao);

int main(void){
	int matriz[5];

	printf("\n");

	for(int i = 0; i < 5; i++){
		printf("Entre com um numero: ");
		scanf("%d", &matriz[i]);
	}

	le_vetor(matriz, 5);

	return 0;
}

void le_vetor(int *vet, int dimensao){
	printf("\nvetor criado: [");

	for(int i = 0; i < dimensao; i++){
		printf(" %d ", vet[i]);
	}
	printf("]\n\n");
}


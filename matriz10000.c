#include <stdio.h>

void init_matriz(int *p, int tam){
	for(int i = 0; i < tam; i++){
		*p = 0;
		p++;
	}
}

void preencher_matriz(int *p, int tam){
	for(int i = 1; i <= tam; i++){
		*p = i;
		p++;
	}
}

int main(){
	int *ponteiro, tamanho;
	int matriz[100][100];
	tamanho = 10000;
	ponteiro = matriz[0];
	init_matriz(ponteiro, tamanho);
	preencher_matriz(ponteiro, tamanho);

	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

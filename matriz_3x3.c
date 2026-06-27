#include <stdio.h>
#include <stdlib.h>

#define COLUNAS 3
#define LINHAS 3

void pedir_matriz(double matriz[LINHAS][COLUNAS]);
void apresentar_matriz_3x3(double matriz[LINHAS][COLUNAS]);

int main(void){
	double matriz[LINHAS][COLUNAS];

	pedir_matriz(matriz);
	apresentar_matriz_3x3(matriz);

	return 0;
}

void pedir_matriz(double matriz[LINHAS][COLUNAS]){
	for(int li = 0; li < LINHAS; li++){
		for(int col = 0; col < COLUNAS; col++){
			printf("[%d][%d] Entre com um int, float, double ou hex(0x...): ", li+1, col+1);
			scanf("%lf", &matriz[li][col]);
		}
	}
}

void apresentar_matriz_3x3(double matriz[3][3]){
	printf("\n");

	for(int li = 0; li < LINHAS; li++){
		for(int col = 0; col < COLUNAS; col++){
			printf("%6.2lf\t", matriz[li][col]);
		}
		printf("\n");
	}
	printf("\n");
}

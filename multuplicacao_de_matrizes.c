#include <stdio.h>
#include <stdlib.h>

int **alocar_matriz(int l, int c);
int **liberar_matriz(int l, int c, int **p);
int **multiplicar_matriz(int **aux, int **p, int lp, int cp, int **r, int lr, int cr);
void mostrar_matriz(int **p, int l, int c);
void preencher_matriz(int **p, int l, int c);
void pedir_matriz(int *l, int *c);

int main(void){
	int **matriz1, **matriz2, **matriz_resultado;
	int linhas_m1, colunas_m1;
	int linhas_m2, colunas_m2;
	int linhas_re, colunas_re;

	printf("\nInicializando matriz 1...\n");
	pedir_matriz(&linhas_m1, &colunas_m1);

	printf("\nInicializando matriz 2...\n");
	pedir_matriz(&linhas_m2, &colunas_m2);

	if(!(colunas_m1 == linhas_m2)){
		printf("Matrizes incompativeis\n");
		exit(1);
	}

	linhas_re = linhas_m1;
	colunas_re = colunas_m2;

	matriz_resultado = alocar_matriz(linhas_re, colunas_re);

	matriz1 = alocar_matriz(linhas_m1, colunas_m1);
	matriz2 = alocar_matriz(linhas_m2, colunas_m2);
	matriz_resultado = alocar_matriz(linhas_re, colunas_re);

	printf("Agora digite os valores para a primeira matriz\n");
	preencher_matriz(matriz1, linhas_m1, colunas_m1);

	printf("Agora digite os valores para a segunda matriz\n");
	preencher_matriz(matriz2, linhas_m2, colunas_m2);

	multiplicar_matriz(matriz_resultado, matriz1, linhas_m1, colunas_m1, matriz2, linhas_m2, colunas_m2);

	mostrar_matriz(matriz_resultado, linhas_re, colunas_re);

	liberar_matriz(linhas_m1, colunas_m1, matriz1);
	liberar_matriz(linhas_m2, colunas_m2, matriz2);
	liberar_matriz(linhas_re, colunas_re, matriz_resultado);

	return 0;
}

int **alocar_matriz(int l, int c){
	int **p; /*ponteiro de linhas para os ponteiros de colunas*/

	/*verificar de linhas e colunas são válidas > 1*/
	if(l < 1 || c < 1){
		printf("Numero de linhas e/ou colunas invalidas");
		return (NULL);
	}

	/*Aloca linhas*/
	p = (int **)calloc(l, sizeof(int *));

	if(p == NULL){
		printf("Memoria insuficiente");
		return (NULL);
	}

	/*Aloca as colunas*/
	for( int i = 0;  i < l; i++){
		p[i] = (int *)calloc(c, sizeof(int));

		if(p[i] == NULL){
			printf("Memoria insuficiente");

			return (NULL);
		}
	}

		return (p);
}

int **liberar_matriz(int l, int c, int **p){

	if(p == NULL) return (NULL);

	if(l < 1 || c < 1){
		printf("Parametros invalidos");
		return (p);
	}

	for(int i = 0; i < l; i++){
		free(p[i]);
	}

	free(p);
	return (NULL);
}

int **multiplicar_matriz(int **aux, int **p, int lp, int cp, int **r, int lr, int cr){
	int valor, j;

	if(aux == NULL){
		printf("Memoria insufuciente");
		return (NULL);
	}

	for(int i = 0; i < lp; i++){
		for(j = 0; j < cr; j++){
			valor = 0;
			for(int g = 0; g < cp; g++){
				valor += ((p[i][g])*(r[g][j]));
			}
			aux[i][j] = valor;
		}
	}
	return aux;
}

void mostrar_matriz(int **p, int l, int c){
	for(int i = 0; i < l; i++){
		printf("\n");
		for( int j = 0; j < c; j++){
			printf("%d ", p[i][j]);
		}
	}
	printf("\n");
}

void preencher_matriz(int **p, int l, int c){
	for(int i = 0; i < l; i++){
		for( int j = 0; j < c; j++){
			printf("Entre com o valor para [%d][%d]: ", i+1, j+1);
			scanf("%d", &p[i][j]);
		}
	}
}

void pedir_matriz(int *l, int *c){

	printf("Entre com o numero de linhas da matriz: ");
	scanf("%d", l);

	printf("Entre com o numero de colunas da matriz: ");
	scanf("%d", c);

}

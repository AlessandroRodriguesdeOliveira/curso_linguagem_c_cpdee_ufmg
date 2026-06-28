#include <stdio.h>

int strend(char *s, char *t){
	int resultado, tamanho;
	resultado = 0;
	tamanho = 0;

	while(*t){
		tamanho++;
		t++;
	}

	t-=tamanho;

	while(*s) s++;

	s-=tamanho;

	while(*s){
		if( *s == *t) resultado = 1;
		s++;
		t++;
	}

	return resultado;
}

int main(){
	int  resultado;
	char *pt1, *pt2;
	char string1[] = "Joaomaria";
	char string2[50];
	pt1 = string1;
	pt2 = string2;

	printf("Escreva qualquer coisa e verifique se ele se encontra no final da palavra 'Joaomaria': ");
	scanf("%s", pt2);

	resultado = strend(pt1, pt2);

	resultado == 1 ? printf("Palavra se encontra no final: " ) : printf("Palavra nao se encontra no final: ");

	printf("%d \n", resultado); 

	return 0;
}

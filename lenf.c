#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	int len;

	if( !( fp = fopen("arquivo.txt", "r") ) ){
		printf("Erro! Impossivel abrir arquivo");
		exit(1);
	}

	while(!feof(fp)){
		getc(fp);
		len++;
	}

	fclose(fp);

	printf("Tamanho da string: %d\n", len);

	return 0;
}

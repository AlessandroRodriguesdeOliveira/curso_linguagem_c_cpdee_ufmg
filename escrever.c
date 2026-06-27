#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char string[100];
	int i;

	fp = fopen("arquivo.txt", "w");

	if(!fp){
		printf("Erro na abertura do arquivo\n");
		exit(1);
	}

	printf("Entre com a string a ser gravada no arquivo: ");
	scanf("%s", string);

	for(i = 0; string[i]; i++) putc(string[i], fp);
	fclose(fp);

	return 0;
}

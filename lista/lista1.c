#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char c;

	if(!(fp = fopen("lista.txt", "r"))){
		printf("Erro! Impossivel abrir o arquivo!\n");
		exit(1);
	}

	printf("Nomes\tIdades\n");

	while(fscanf(fp, "%c", &c) == 1){
		c == ',' ? printf("\t") : printf("%c", c);
	}

	fclose(fp);

	return 0;
}

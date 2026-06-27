#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char c;

	if(!(fp = fopen("lista.txt", "r"))){
		printf("Erro!");
		exit(1);
	}

	printf("\nNomes\tIdades\n");

	while(!feof(fp)){
		fscanf(fp, "%c", &c);
		c == ',' ? printf("\t") : printf("%c", c);
	}

	fclose(fp);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char c;

	if(!(fp = fopen("lista.txt", "r"))){
		puts("Erro! Impossivel abrir o arquivo!");
		exit(1);
	}

	puts("Nomes\tIdades");

	while((c = getc(fp)) != EOF){
		c == ',' ? putc('\t', stdout) : putc(c, stdout);
	}

	fclose(fp);

	return 0;
}

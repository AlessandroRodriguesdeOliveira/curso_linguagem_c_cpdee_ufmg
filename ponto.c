#include <stdio.h>
#include <math.h>

struct ponto{
	int x;
	int y;
};

void pedir_ponto(struct ponto *p);
double distancia_entre_pontos(struct ponto f, struct ponto i);


int main(void){
	struct ponto ponto1;
	struct ponto ponto2;
	double distancia;

	pedir_ponto(&ponto1);
	pedir_ponto(&ponto2);

	distancia = distancia_entre_pontos(ponto2, ponto1);

	printf("A distancia entre os pontos e: %.1lf\n", distancia);

	return 0;
}

void pedir_ponto(struct ponto *p){
	do{
		printf("Entre com o x: ");

	}while( !(scanf("%d", &p->x)) );

	do{
		printf("Entre com o y: ");

	}while( !(scanf("%d", &p->y)) );
}

double distancia_entre_pontos(struct ponto f, struct ponto i){
	double deltaX, deltaY;

	deltaX = (f.x - i.x);
	deltaY = (f.y - i.y);

	return ( sqrt( pow(deltaX, 2) + pow(deltaY, 2) ) );
}

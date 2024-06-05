#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int indice;
	double x1, y1, x2, y2, distancia;
	
	printf("Informe o valoe de x1: ");
	scanf("%lf", &x1);
	printf("Informe o valoe de y1: ");
	scanf("%lf", &y1);
	printf("Informe o valoe de x2: ");
	scanf("%lf", &x2);
	printf("Informe o valoe de y2: ");
	scanf("%lf", &y2);
	
	indice = 2;
	distancia = sqrt(pow(x2-x1, indice) + pow(y2-y1, indice));
	
	printf("A distância entre os pontos é = %.2lf", distancia);
	
	return 0;
}

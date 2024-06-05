#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, delta, X1, X2;
	
	printf("Digite o valor de a (diferente de 0): ");
	scanf("%i", &a);
	printf("Digite o valor de b: ");
	scanf("%i", &b);
	printf("Digite o valor de c: ");
	scanf("%i", &c);

	delta = ((b*b)-(4*(a*c)));

	if (delta < 0) {
	printf("Não existe raiz real, logo X1=0 e X2=0");}
	else if (delta == 0) {
		X1 = X2 = ((-b) + sqrt(delta)) / (2*a);
		printf("Existe apenas uma raiz real, logo seu valor é: %i", X1);}
	else{
		X1 = ((-b) + sqrt(delta)) / (2*a);
		X2 = ((-b) - sqrt(delta)) / (2*a);
		printf("Existem duas raizes reais, seus valores são:\n");
		printf("X1: %i", X1);
		printf("\nX2: %i", X2);
	}
	
	
	return 0;

}

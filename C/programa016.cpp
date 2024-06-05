#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, indice;
	double n3, a, b, c;
	
	printf("Forneça um numero inteiro: ");
	scanf("%i", &n1);
	printf("Forneça outro numero inteiro: ");
	scanf("%i", &n2);
	printf("Forneça um numero real: ");
	scanf("%lf", &n3);
	
	indice = 3;
	a = (n1*2) * (n2/2);
	b = (n1*3) + n3;
	c = pow(n3, indice);
	
	printf("O produto do dobro do primeiro com metade do segundo = %.1lf", a);
	printf("\nA soma do triplo do primeiro com o terceiro = %.1lf", b);
	printf("\nO terceiro elevado ao cubo = %.1lf", c);
	
	return 0;
}

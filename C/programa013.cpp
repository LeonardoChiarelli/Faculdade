#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int indice;
	double raio, volume;
	
	printf("Informe o valor do raio(R): ");
	scanf("%lf", &raio);
	
	indice = 3;
	volume = (4.0/3.0) * 3.14159 * pow(raio, indice);
	
	printf("O volume da esfera é: %.2lf", volume);
	
	return 0;
}

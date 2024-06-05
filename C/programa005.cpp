#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	printf("\nO valor da área é: %.2f%", area);
	
	return 0;
}

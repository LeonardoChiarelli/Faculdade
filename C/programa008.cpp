#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma;
	
	printf("Digite 1 n�mero: ");
	scanf("%i", &numero1);
	printf("Digite 2 n�mero: ");
	scanf("%i", &numero2);
	
	soma = numero1 + numero2;
	
	if((numero1 + numero2)>= 10){
		printf("A soma � igual a: %i\nO dobro �: %i", soma, (numero1 + numero2)*2);
	}
	
	else {
		printf("A soma � igual a: %i\nO triplo �: %i", soma, (numero1 + numero2)*3);
	}
	
	return 0; 
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nome, sexo;	
	int idade;
	float peso;
	
	printf("Insira seu nome: ");
	scanf("%s", &nome); // não se esquecer do "&" antes da variável 
	printf("Insira sua idade: ");
	scanf("%i", &idade);
	printf("Insira seu peso: ");
	scanf("%d", &peso);
	printf("Insira seu sexo: ");
	scanf("%s", &sexo);
	
	printf("Nome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nPeso: %d", peso);
	printf("\nSexo: %s", sexo);
	
	return 0;
}

// Marcar para a professora ver

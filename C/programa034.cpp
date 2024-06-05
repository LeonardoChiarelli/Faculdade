#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, i, soma;
	
	for(i=1; i<=5; i++){
		printf("Informe sua idade: ");
		scanf("%i", &idade);
		soma += idade;
	}
	printf("A média é: %i", soma/5);
	
	return 0;
}

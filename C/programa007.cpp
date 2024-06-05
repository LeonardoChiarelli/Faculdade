#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Insira um número: ");
	scanf("%i", &numero);
	
	if(numero%2 == 0){ // '%' nesse caso quer dizer que o resto da divisão deve ser igual a
		printf("Esse número %i é par!", numero);
	}
	else{
		printf("Esse número %i é ímpar!", numero);
	}
	
	return 0;
}

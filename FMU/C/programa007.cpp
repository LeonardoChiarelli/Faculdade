#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Insira um n�mero: ");
	scanf("%i", &numero);
	
	if(numero%2 == 0){ // '%' nesse caso quer dizer que o resto da divis�o deve ser igual a
		printf("Esse n�mero %i � par!", numero);
	}
	else{
		printf("Esse n�mero %i � �mpar!", numero);
	}
	
	return 0;
}

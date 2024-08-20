#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char sexo;
	
	printf("Infome a idade da criança: ");
	scanf("%i", &idade);
	printf("Informe o sexo da criança (M) ou (F): ");
	scanf(" %c", &sexo);
	
	sexo = toupper(sexo);
	
	if(sexo=='M' && idade<=10){
		printf("Carrinho");
	}
	else if(sexo=='M' && idade>10){
		printf("Bola");
	}
	else if(sexo=='F' && idade<=10){
		printf("Boneca");
	}
	else{
		printf("Esmalte");
	}
	
	return 0;
}

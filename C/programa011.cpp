#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha;
	
	printf("Digite a senha: ");
	scanf("%i", &senha);
	
	if (senha != 4531){
		printf("Senha inválida!");
	}
	else{
		printf("Senha validada!");
	}
}

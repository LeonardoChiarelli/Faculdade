#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Digite um código de 1-5: ");
	scanf("%i", &codigo);
	
	if(codigo == 1){
		printf("Você é do departamento financeiro.");}
		else if(codigo == 2){
		printf("Você é do departamento de recursos humanos.");}
		else if(codigo == 3){
		printf("Você é do departamento de estoque.");}
		else if(codigo == 4){
		printf("Você é do departamento de contas a pagar.");}
		else{
		printf("Você é do departamento de logística.");}
	
	return 0;
}	

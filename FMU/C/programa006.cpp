#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Digite um c�digo de 1-5: ");
	scanf("%i", &codigo);
	
	if(codigo == 1){
		printf("Voc� � do departamento financeiro.");}
		else if(codigo == 2){
		printf("Voc� � do departamento de recursos humanos.");}
		else if(codigo == 3){
		printf("Voc� � do departamento de estoque.");}
		else if(codigo == 4){
		printf("Voc� � do departamento de contas a pagar.");}
		else{
		printf("Voc� � do departamento de log�stica.");}
	
	return 0;
}	

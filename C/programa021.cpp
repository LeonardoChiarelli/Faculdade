#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2;
	char op;
	
	printf("Informe um número: ");
	scanf("%lf", &num1);
	printf("\nInforme o operador lógico (+ - * /): ");
	scanf("%s", &op);
	printf("\nInforme outro número: ");
	scanf("%lf", &num2);
	
	switch(op){
		case'+':
			printf("O resultado da soma é: %.2lf", num1+num2);
		break;
		case'-':
			printf("O resultado da subtração é: %.2lf", num1-num2);
		break;
		case'*':
			printf("O resultado da multiplicação é: %.2lf", num1*num2);
		break;
		case'/':
			if(num1!=0 && num2!=0){
				printf("O resultado da divisão é: %.2lf", num1/num2);
			}
			else{
				printf("Não existe divisão por 0");
			}
		break;
		default:
			printf("Operado inválido");
	}
	
	return 0;
}

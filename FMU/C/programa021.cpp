#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2;
	char op;
	
	printf("Informe um n�mero: ");
	scanf("%lf", &num1);
	printf("\nInforme o operador l�gico (+ - * /): ");
	scanf("%s", &op);
	printf("\nInforme outro n�mero: ");
	scanf("%lf", &num2);
	
	switch(op){
		case'+':
			printf("O resultado da soma �: %.2lf", num1+num2);
		break;
		case'-':
			printf("O resultado da subtra��o �: %.2lf", num1-num2);
		break;
		case'*':
			printf("O resultado da multiplica��o �: %.2lf", num1*num2);
		break;
		case'/':
			if(num1!=0 && num2!=0){
				printf("O resultado da divis�o �: %.2lf", num1/num2);
			}
			else{
				printf("N�o existe divis�o por 0");
			}
		break;
		default:
			printf("Operado inv�lido");
	}
	
	return 0;
}

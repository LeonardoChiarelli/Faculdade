#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	switch(num){
		case -10 ... 0:
			printf("O n�mero est� no intervalo de -10 e 0");
		break;
		case 1 ... 11:
			printf("O n�mero est� no intervalo de 1 e 11");
		break;
		case 12 ... 24:
			printf("O n�mero est� no intervalo de 12 e 24");
		break;
		case 25:
			printf("O n�mero � 25");
		break;
		default:
			printf("N�mero � inv�lido");
	}
	
	return 0;
}

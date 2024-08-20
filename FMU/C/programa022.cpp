#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	switch(num){
		case -10 ... 0:
			printf("O número está no intervalo de -10 e 0");
		break;
		case 1 ... 11:
			printf("O número está no intervalo de 1 e 11");
		break;
		case 12 ... 24:
			printf("O número está no intervalo de 12 e 24");
		break;
		case 25:
			printf("O número é 25");
		break;
		default:
			printf("Número é inválido");
	}
	
	return 0;
}

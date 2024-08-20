#include <stdio.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, anos, meses, dias;
	
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	anos = numero / 365;
	meses = (numero%365) / 30;
	dias = (numero%365) % 30;
	
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)", anos, meses, dias);

	return 0;
}

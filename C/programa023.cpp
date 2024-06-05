#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double fah, cel;
	
	printf("Insira a temperatura em Fahrenheit: ");
	scanf("%lf", &fah);
	
	cel = ((fah-32)*5)/9;
	
	printf("A temperatura em Celsius é: %.1lfºC", cel);
	
	return 0;
}

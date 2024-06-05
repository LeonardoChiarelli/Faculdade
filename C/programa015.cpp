#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double taxa, PrecoFinal, km;
	
	printf("Informe quantos KM o passageiro rodou: ");
	scanf("%lf", &km);
	
	taxa = 4.90;
	PrecoFinal = (km * 3) + taxa;
	
	printf("Você rodou %.2lfkm\nValor a ser pago = R$%.2lf", km, PrecoFinal);
	
	return 0;
}

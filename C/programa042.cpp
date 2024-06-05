#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float altura[5], peso[5], IMC[5];
	
	for(int i=1; i<=5; i++){
		printf("Informe sua altura: ");
		scanf("%f", &altura[i]);
		printf("Informe seu peso: ");
		scanf("%f", &peso[i]);
		
		IMC[i] = peso[i]/pow(altura[i], 2);
	}
	
	for(int i=0; i<=5; i+=2){
		printf("\nO IMC da %iª pessoa é %.2f\n", i, IMC[i]);
	}
	
	return 0;
}

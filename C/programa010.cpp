#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso_ideal_m, peso_ideal_f;
	int genero;
	
	printf("Qual sua altura em metros? ");
	scanf("%f", &altura);
	printf("Qual seu gênero 2(M) ou 1(F)? ");
	scanf("%i", &genero);
	
	peso_ideal_m = (72.7*altura) - 58;
	peso_ideal_f = (62.1*altura) - 44.7;
	
	if (genero == 2){
		printf("Seu peso ideal é: %.2f", peso_ideal_m);
	}
	
	else{
		printf("Seu peso ideal é: %.2f", peso_ideal_f);
	}
	
	return 0;
}

// biblioteca --> <ctype.h> para usar os parâmetros abaixo
// toupper --> maiúsculo
// tolower --> minúsculo

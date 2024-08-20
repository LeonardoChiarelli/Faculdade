#include <stdio.h>
#include <locale.h>

	float n1, n2, media;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da N1: ");
	scanf("%f", &n1);
	
	printf("Digite o valor da N2: ");
	scanf("%f", &n2);
	
	media = (n1+n2) /2;
	printf("\nSua média é: %.2f\n", media);
	
	return 0;
}

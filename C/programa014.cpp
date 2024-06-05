#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, n3, media;
	
	printf("Digite o valor da N1: ");
	scanf("%lf", &n1);
	printf("Digite o valor da N2: ");
	scanf("%lf", &n2);
	printf("Digite o valor da N3: ");
	scanf("%lf", &n3);
	
	media = (n1*0.2 + n2*0.3 + n3*0.5)/3;
	
	printf("Sua média final é %.2lf", media);
	
	return 0;
}

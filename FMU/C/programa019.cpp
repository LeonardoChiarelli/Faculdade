#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num, qua, cub, rq, rc;
	
	printf("Insira um número: ");
	scanf("%lf", &num);
	
	qua = pow(num, 2);
	cub = pow(num, 3);
	rq = sqrt(num);
	rc = cbrt(num);
	
	printf("O número %.2lf ao quadrado é %.2lf", num, qua);
	printf("\nO número %.2lf ao cubo é %.2lf", num, cub);
	printf("\nA raiz quadrada de %.2lf é igual a %.2lf", num, rq);
	printf("\nA raiz cúbica de %.2lf é igual a %.2lf", num, rc);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num, qua, cub, rq, rc;
	
	printf("Insira um n�mero: ");
	scanf("%lf", &num);
	
	qua = pow(num, 2);
	cub = pow(num, 3);
	rq = sqrt(num);
	rc = cbrt(num);
	
	printf("O n�mero %.2lf ao quadrado � %.2lf", num, qua);
	printf("\nO n�mero %.2lf ao cubo � %.2lf", num, cub);
	printf("\nA raiz quadrada de %.2lf � igual a %.2lf", num, rq);
	printf("\nA raiz c�bica de %.2lf � igual a %.2lf", num, rc);
	
	return 0;
}

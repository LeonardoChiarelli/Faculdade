#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double num, indice, resultado, raiz, valor;
	num = 125;
	indice = 2;
	
	resultado = pow(num, indice);
	raiz = sqrt(num);
	valor = 9.752;
	
	printf("%.2lf", resultado);
	printf("\nA raiz quadrada de %.2lf é = %.2lf", num, raiz);
	printf("\nO valor %.3lf arredondado para cima é %.2lf", valor, ceil(valor));
	printf("\nO valor %.3lf arredondado para baixo é %.2lf", valor, floor(valor));
	
	return 0;
}

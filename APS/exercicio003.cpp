#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int salario, novo_salario, reajuste, percentual;
	
	printf("Digite o seu salário: ");
	scanf("%d", &salario);
	
	if (salario >=0 && salario <=400.00){
		novo_salario = (salario * 0.15) + salario;
		printf("Novo salário: %d", novo_salario);
		reajuste = salario * 0.15;
		printf("\nRejuste em ganho: R$%d", reajuste);
		percentual = 15;
		printf("\nEm percentual: %d%%", percentual);}
		
		else if (salario >=400.01 && salario <=800.00){
		novo_salario = (salario * 0.12) + salario;
		printf("Novo salário: %d", novo_salario);
		reajuste = salario * 0.12;
		printf("\nReajuste em ganho: R$%d", reajuste);
		percentual = 12;
		printf("\nEm percentual: %d%%", percentual);}
		
		else if (salario >=800.01 && salario <= 1200.00){
		novo_salario = (salario * 0.10) + salario;
		printf("Novo salário: %d", novo_salario);
		reajuste = salario * 0.10;
		printf("\nReajuste em ganho: R$%d", reajuste);
		percentual = 10;
		printf("\nEm percentual: %d%%", percentual);}
		
		else if (salario >=1200.01 && salario <=2000.00){
		novo_salario = (salario * 0.07) + salario;
		printf("Novo salário: %d", novo_salario);
		reajuste = salario * 0.07;
		printf("\nReajuste em ganho: R$%d", reajuste);
		percentual = 7;
		printf("\nEm percentual: %d%%", percentual);}
		
		else{
		novo_salario = (salario * 0.04) + salario;
		printf("Novo salário: %d", novo_salario);
		reajuste = salario * 0.04;
		printf("\nReajuste em ganho: R$%d", reajuste);
		percentual = 4;
		printf("\nEm percentual: %d%%", percentual);}
	
	return 0;
}

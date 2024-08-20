#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qde;
	double PU, total, desc;
	
	printf("Informe a quantidade do produto: ");
	scanf("%i", &qde);
	printf("\nInforme o preço unitário: ");
	scanf("%lf", &PU);
	
	if(PU>0 && qde>0){
		total = qde*PU;
		if(qde<=5){
			desc=total*0.02;
		}
		else if(qde>=6 && qde<=10){
			desc=total*0.03;
		}
		else{
			desc=total*0.05;
		}
	}
	printf("\nValor total da compra: R$%.2lf", total);
	
	return 0;
}

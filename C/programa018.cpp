#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int SB;
	double SL, VVT, INSS, SLVT;
	char VT;
	
	printf("Informe seu sal�rio bruto: ");
	scanf("%i", &SB);
	printf("\nVoc� possui vale transporte? S/N: ");
	scanf("%c ", &VT);
	VT = toupper(VT);

	VVT = SB*0.06;
	INSS = SB*0.08;
	SLVT = SB - (VVT+INSS);
	SL = SB - INSS;
	
	if(VT == 'S'){
		printf("\nSal�rio Bruto = R$%i", SB);
		printf("\nVale Transporte: R$%.2lf", VVT);
		printf("\nINSS: R$%.2lf", INSS);
		printf("\nSal�rio Liquido: R$%.2lf", SLVT);	
	}
	else{
		printf("\nSal�rio Bruto = R$%i", SB);
		printf("\nINSS: R$%.2lf", INSS);
		printf("\nSal�rio Liquido: R$%.2lf", SL);	
	}
	
	return 0;
}

// (void) n�o retorna nenhum valor

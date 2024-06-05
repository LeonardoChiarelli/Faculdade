#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float compras;
	
	printf("Digite o valor das suas compras: ");
	scanf("%f", &compras);
	
	if(compras <= 100){
		printf("Você obteve um desconto de 5%%: %.2f", compras-(compras*0.05));
	}	
	
	else{
		printf("Você obteve um desconto de 10%%: %.2f", compras-(compras*0.1));
	}
	
	return 0; 
}

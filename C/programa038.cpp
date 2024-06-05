#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, soma=0;
	
	for(i=1; i<=10; i++){
		printf("Informe um número: ");
		scanf("%i", &num);
		
		if(num<40){
			soma += num;
		} 
	}
	printf("A soma dos números é: %i", soma);	
	
	return 0;
}

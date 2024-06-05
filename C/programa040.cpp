#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[5], i;
	
	for (i=0; i<=4; i++){
		printf("Informe sua idade: ");
		scanf("%i", &idade[i]); // indice no lugar do número do array
	}
	
	for(i=0; i<=4; i++){
		printf("\nNa posição %i a idade registrada é %i\n", i, idade[i]);
	}
	
	return 0;	
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[5], i;
	
	for (i=0; i<=4; i++){
		printf("Informe sua idade: ");
		scanf("%i", &idade[i]); // indice no lugar do n�mero do array
	}
	
	for(i=0; i<=4; i++){
		printf("\nNa posi��o %i a idade registrada � %i\n", i, idade[i]);
	}
	
	return 0;	
}

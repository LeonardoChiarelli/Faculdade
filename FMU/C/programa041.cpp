#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[20], i;
	
	for(i=0; i<=19; i++){
		printf("Digite um número: ");
		scanf("%i", &num[i]);
	}
	
	for(i=0; i<=19; i++){
		printf("\nO número registrado na posição %i é %i\n", i, num[i]);
	}	
	
	return 0;
}

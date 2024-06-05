#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, somaM, numM, somaF, numF;
	char sexo;
	
	for(i=1; i<=10; i++){
		printf("Informe seu sexo (M) ou (F): ");
		scanf(" %c", &sexo);
		if(sexo == 'M'){
			somaM += numM;
		} else{
			somaF += numF;
		}
	}
	printf("Há %i homens", numM);
	printf("\nHá %i mulheres", numF);
	
	return 0;
}

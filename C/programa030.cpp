#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, op;

	scanf("%i", &op);
	
	for(i=0; op!=2921; i++){
		if(op!=2921){
			printf("Acesso negado!\n");
			scanf("%i", &op);
		}
	}
	printf("Acesso permitido!");
	
	return 0;
}

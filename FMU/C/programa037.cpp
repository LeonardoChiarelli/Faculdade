#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, n;
	
	printf("Informe um valor: ");
	scanf("%i", &n);
	
	if(n>0){
		for(i=n; i>=1; i--){
		printf("\n %i \n", i);
		}	
	} else{
		for(i=n; i<=1; i++){
			printf("\n %i \n", i);
		}
	}
	return 0;
}

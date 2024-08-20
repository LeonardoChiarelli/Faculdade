#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	do{
		printf("Digite um valor inteiro: ");
		scanf("%i", &n);
	}
	while(n<=0);
	
	for(i=n;i>=0;i--){
		printf("\n%i\n", i);
	}
	
	return 0;
}

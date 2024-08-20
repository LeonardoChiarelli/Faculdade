#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, o, idade;
	
	for(i=100; i<=200; i++){
		printf("\n %i \n", i);
	}	
	
	for(o=200; o>=100; o--){
		printf("\n %i \n", o);
	}
	
	return 0;
}

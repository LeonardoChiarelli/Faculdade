#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=0;i<=100;i++){
		printf("\n %i \n", i);
	}
	
	return 0;
}

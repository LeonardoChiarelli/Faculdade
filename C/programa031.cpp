#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int c = 1;
	
	do{
		printf("\n batata \n");
		c++;
	} while(c<=10);
}

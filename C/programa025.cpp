#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	double c;
	
	for(i=50;i<=65;i++){
		c = 0.56*(i-32);
		printf("\nA temperatura em Celsius é: %.2lf\n", c);
	}
	
	return 0;
}

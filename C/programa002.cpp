#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1 = 9.2;
	float N2 = 8.3;
	float media;
	
	media = (N1+N2) /2;
	printf("Sua média é: %.2f", media);
	
	return 0;
}

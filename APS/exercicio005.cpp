#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double N, soma=0, media;
	int i=0, c=0;
	
	for (i = 0; i < 6; ++i){
		scanf("%lf",&N);
		if (N > 0){
			c++;
			soma += N;
		}
	}
	
	media = soma/c;

	printf("%d valores positivos \n", c);
	printf("média = %.1lf\n", media);
	return 0;
}

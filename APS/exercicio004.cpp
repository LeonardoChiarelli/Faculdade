#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N, N2, N3, N4, N5, N6, N7, N8, N9, N10;
	
	printf("Digite um valor para N: ");
	scanf("%d", &N);

	N = 1 * N;	
	N2 = 2 * N;
	N3 = 3 * N;
	N4 = 4 * N;
	N5 = 5 * N;
	N6 = 6 * N;
	N7 = 7 * N;
	N8 = 8 * N;
	N9 = 9 * N;
	N10 = 10 * N;
	
	printf("1 x %d = %d", N, N);
	printf("\n2 x %d = %d", N, N2);
	printf("\n3 x %d = %d", N, N3);
	printf("\n4 x %d = %d", N, N4);
	printf("\n5 x %d = %d", N, N5);
	printf("\n6 x %d = %d", N, N6);
	printf("\n7 x %d = %d", N, N7);
	printf("\n8 x %d = %d", N, N8);
	printf("\n9 x %d = %d", N, N9);
	printf("\n10 x %d = %d", N, N10);	
	
	return 0;
}

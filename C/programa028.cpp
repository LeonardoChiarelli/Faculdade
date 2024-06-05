#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	
	int AN, idade;
	
	printf("Ano atual: %i", data_hora_atual->tm_year+1900);
	printf("\nInforme o ano de nascimento: ");
	scanf("%i", &AN);
	
	idade = segundos - AN;
	
	if(idade >=16 && idade<18){
		printf("Você já pode votar!");
	}
	else if(idade>=18){
		printf("Você deve votar!");
	}
	else{
		printf("Você não pode votar.");
	}
	
	return 0;
}

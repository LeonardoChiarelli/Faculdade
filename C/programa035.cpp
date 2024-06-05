#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=2;
	
	while(i<=1000){
		if(i%2 == 0){
			printf("\n %i \n", i);
		} else{
			printf("");
		}
		i++;
	}
	
	return 0;
}

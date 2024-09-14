#include <stdio.h>

int main(){
	int Valor, N100, N50, N20, N10, N5;
	
	printf("Escreva valor que vai sacar: ");
		scanf("%d", &Valor);
		
		N100 = Valor / 100;
		Valor = Valor % 100;
		
		N50 = Valor / 50;
		Valor = Valor % 50;
		
		N20 = Valor / 20;
		Valor = Valor % 20;
		
		N10 = Valor / 10;
		Valor = Valor % 10;
		
		N5 = Valor / 5;
		Valor = Valor % 5;
		
		printf("Nota de 100: %d\n", N100);
		
		printf("Nota de 50: %d\n", N50);
			
		printf("Nota de 20: %d\n", N20);
			
		printf("Nota de 10: %d\n", N10);
					
		printf("Nota de 5: %d\n", N5);
		
		return 0; 
						
}

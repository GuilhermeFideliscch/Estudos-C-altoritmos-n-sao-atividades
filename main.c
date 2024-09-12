/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float va,va2;
	printf("Digite o valor da compra\n");
	scanf("%f",& va);
	if (va <= 100) {
		printf("o valor da sua compra e: %.2f",va);
	} else if (va >=101 && va <= 500) {
		va2 = va-(va *0.10);
		printf("voce tem direito a um desconto de 10%, o valor da sua compra e: %.2f",va2);
	}     else {
		  va2 = va-(va * 0.20);
		  printf("voce tem direito a um desconto de 20%, o valor da sua compra e: %.2f",va2);
	}

	return 0;
}
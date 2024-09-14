#include <stdio.h>

int main(){
	int num,perf;
	printf("digite um numero");
	scanf("%d",& num);
	perf = num*num/num;
	if(perf = num){
		printf("O numero %d e um quadrado perfeito.", num);
	}else{
		printf("O numero %d nao e um quadrado perfeio.", num);
	}
	return 0;
}

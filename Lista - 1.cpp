#include<stdio.h>

int main(){
	int quantidadeNumeros, valor, total;
	printf("Informe a quantidade de numeros: ");
	scanf("%d", &quantidadeNumeros);
	for(int i = 1; i <= quantidadeNumeros; i++){
		printf("Digite um valor:");
		scanf("%d", &valor);
		if(valor == 0){
			quantidadeNumeros = i - 1;
			break;
		}
		total += valor;		
	}
	printf("Total: %d", total);
	printf("\nQuantidade de numeros: %d", quantidadeNumeros);
}

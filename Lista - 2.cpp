 #include<stdio.h>
int main(){
int a, b, c, resultado, contador;

while ( c >=0 ){	
	printf("\nAtribua a:");
	scanf("%d", &a);
	printf("Atribua b:");
	scanf("%d", &b);
	printf("Atribua c:");
	scanf("%d", &c);
	if(c > 0){
		resultado = a * b * c;
		printf("Resultado: %d", resultado);
		contador++;	
		}
	}
printf("\n Operacoes realizadas: %d", contador);
}

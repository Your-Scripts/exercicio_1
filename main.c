#include <stdio.h>
#include <locale.h>

void Troca(int *i, int *j){ 
   int temp;
   temp = *i;
   *i = *j;
   *j = temp;
}

int main() {
	int a;
	int b;
	printf("Introduza o valor do 1º: ");
	scanf("%d",&a);
	fflush(stdin);
   
	printf("Introduza o valor do 2º: ");
	scanf("%d",&b);
	
	Troca(&a ,&b);
	printf("Valor do 1º: %d \n", a);
	printf("Valor do 2º: %d \n", b);
}

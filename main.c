// Jo�o Gabriel | a23013
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
	printf("Introduza o valor do 1�: ");
	scanf("%d",&a);
	fflush(stdin);
   
	printf("Introduza o valor do 2�: ");
	scanf("%d",&b);
	
	Troca(&a ,&b);
	printf("Valor do 1�: %d \n", a);
	printf("Valor do 2�: %d \n", b);
}

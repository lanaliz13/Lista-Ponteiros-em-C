#include<stdio.h>
#include<locale.h>

void troca(int *pa, int *pb){
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A, B;
	int *PA;
	int *PB;
	
	PA = &A;
	PB = &B;
	
	printf("Digite um número: ");
	scanf("%d", PA);
	printf("Digite outro número: ");
	scanf("%d", PB);
	
	troca(PA, PB);
	
	printf("Valores atualizados: ");
	printf("A = %d e B = %d", A, B);
	
	return 0;
}

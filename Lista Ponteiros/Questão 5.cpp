#include<stdio.h>


int main(){
	float x;
	float *p;
	
	p = &x;
	
	printf("Digite um valor qualquer: ");
	scanf("%f", &x); 
	
	*p *= 2;
	
	printf("O dobro desse numero e: %.2f", *p);
	
    return 0;
}

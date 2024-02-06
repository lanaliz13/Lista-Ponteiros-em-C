#include<stdio.h>
#include<locale.h>

void ordem(int * x, int * y, int * z){
	int aux;
	if(*x>*y){
		aux = *x;
		*x = *y;
		*y = aux;
	}

	if(*y>*z){
		aux = *y;
		*y = *z;
		*z = aux;
		
	}

		if(*x>*y){
		aux = *x;
		*x = *y;
		*y = aux;
	}

}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite três valores: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	ordem(&a, &b, &c);
	
	printf("a=%d, b=%d, c=%d", a , b, c);
	
	return 0;
	
}

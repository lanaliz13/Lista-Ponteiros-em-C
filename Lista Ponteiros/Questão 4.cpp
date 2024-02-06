#include <stdio.h>
#include<locale.h>
#include <string.h>

void numinvertido(char *vet) {
    int n;
    int aux, final, tamanho = strlen(vet);

    final = tamanho - 1;

    for (n = 0; n < tamanho / 2; n++) {
        aux = *(vet + n);
        *(vet + n) = *(vet + final);
        *(vet + final) = aux;
        final--;
    }

   
    printf("Número Invertido: %s\n", vet);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    char n[10] = {""};
	printf("Digite um número: ");
    scanf("%s", &n);
   


    numinvertido(n);

    return 0;
}

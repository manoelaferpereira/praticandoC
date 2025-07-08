#include <stdio.h>
#include <math.h>

// Desenvolver um algoritmo que leia um número inteiro 
// e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if ((numero % 5 == 0) && (numero % 3 == 0)) {
        printf("O número é divisível por 5 e por 3.\n");
    } 
    else if (numero > 100) {
        printf("Esse número é maior que 100 e não será analisado.\n");
    } 
    else {
        printf("O número não é divisível por 5 e por 3 ao mesmo tempo.\n");
    }

    return 0;
}

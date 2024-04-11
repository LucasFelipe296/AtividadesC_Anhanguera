/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    printf("Opa chefe, me diga um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        if (numero % 2 == 0) {
            printf("Eita, o número %d é par, daora\n", numero);
        } else {
            printf("Legal, o número %d é ímpar, muito doido fera \n", numero);
        }
    } else {
        printf("o número é negativo, tenta de novo, mas com um número positivo dessa vez \n");
    }

    return 0;
}
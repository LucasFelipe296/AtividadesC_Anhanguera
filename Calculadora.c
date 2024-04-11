/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    float numero1, numero2;
    char operacao;

    printf("Digite um número ai: ");
    scanf("%f", &numero1);

    printf("agora mais um número: ");
    scanf("%f", &numero2);

    printf("Digite qual será a operação (+, -, * ou /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("%.2f + %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
    } else if (operacao == '-') {
        printf("%.2f - %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
    } else if (operacao == '*') {
        printf("%.2f * %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
    } else if (operacao == '/') {
        if (numero2 != 0) {
            printf("%.2f / %.2f = %.2f\n", numero1, numero2, numero1 / numero2);
        } else {
            printf("Não tem como dividir por zero.\n");
        }
    } else {
        printf("isso não é uma operação válida! Por favor, digite +, -, * ou /.\n");
    }

    return 0;
}
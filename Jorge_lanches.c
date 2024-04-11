/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float preco;

    printf("Bem vindo ao jorge lanches, o que vai querer hoje? (Digite o código do lanche): ");
    scanf("%d", &codigo);

    printf("Digite quantos lanches você quer: ");
    scanf("%d", &quantidade);

    if (codigo == 100) {
        preco = 1.20;
    } else if (codigo == 101) {
        preco = 1.30;
    } else if (codigo == 102) {
        preco = 1.50;
    } else if (codigo == 103) {
        preco = 1.20;
    } else if (codigo == 104) {
        preco = 1.70;
    } else if (codigo == 105) {
        preco = 2.20;
    } else if (codigo == 106) {
        preco = 1.00;
    } else {
        printf("Código inválido!\n");
        return 1;
    }

    float valor_total = preco * quantidade;

    printf("Valor total a pagar: R$ %.2f\n", valor_total);

    return 0;
}

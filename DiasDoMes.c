/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int mes;

    printf(Fala ai monstrão, digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 2:
            printf("Fevereiro tem 28 dias seu espertinho.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Esse mês tem 30 dias.\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Esse mês tem 31 dias.\n");
            break;
        default:
            printf("Isso ai não é mês digite um número de 1 a 12, parceiro.\n");
    }

    return 0;
}



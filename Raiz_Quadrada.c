/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("digita um número ai fera: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n chefe", numero, raiz);
    } else {
        printf("Número negativo não dá pra calcular a raiz né campeão \n");
    }

    return 0;
}
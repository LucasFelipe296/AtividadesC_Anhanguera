/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int nota;
    
 
    printf("Insira uma nota de 0 a 100: ");
    scanf("%d", &nota);
    
    
    char conceito;
    if (nota >= 86)
        conceito = 'A';
    else if (nota >= 61)
        conceito = 'B';
    else if (nota >= 36)
        conceito = 'C';
    else if (nota >= 1)
        conceito = 'D';
    else
        conceito = 'E';
    
    
    printf("ela corresponde a : %c\n", conceito);

    return 0;
}


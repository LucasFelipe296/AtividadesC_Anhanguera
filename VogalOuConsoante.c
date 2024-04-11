/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    char letra;

    printf("E aí, me dá uma letra minúscula: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Legal, a letra %c é uma vogal\n", letra);
    } else if (letra >= 'a' && letra <= 'z') {
        printf("Maneiro, a letra %c é uma consoante\n", letra);
    } else {
        printf(" isso não é uma letra minúscula\n");
    }

    return 0;
}

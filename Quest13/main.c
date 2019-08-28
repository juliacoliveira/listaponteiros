#include <stdio.h>
//Júlia CCO
void incremente (int *p){ // o ponteiro vai apontar para o endereço fornecido pela main
    *p = *p + 1; // o elemento que o ponteiro aponta vai receber o valor inicial do elemento mais um

}
int main()
{
    int a;
    a=10;
    incremente(&a); // função vai receber como argumento um endereço
    printf("a = %d\n", a);
}

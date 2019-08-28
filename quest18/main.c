#include <stdio.h>
#include <stdlib.h>
/* Júlia CCO
   Turma: 1A
   */
void somaj(int* p1, int* p2, int* p3, int n){
    for (int i=0; i<n; i++){
        p3[i] = p1[i] + p2[i];
    }
}
int main(void)
{
    int n;
    printf("Diga o número de elementos dos vetores");
    scanf("%d", &n);
    int *p1 = (int*) malloc(n*sizeof(int));
    int *p2 = (int*) malloc(n*sizeof(int));
    int *p3 = (int*) malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        printf("Diga o elemento %d do primeiro vetor", i);
        scanf("%d", &p1[i]);
        printf("Diga o elemento %d do segundo vetor", i);
        scanf("%d", &p2[i]);
    }
    somaj(p1, p2, p3, n);

    for (int i=0; i<n; i++){
        printf ("%d\n", p3[i]);
    }

    return 0;
}

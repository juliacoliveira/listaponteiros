#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Júlia CCO
int compara(const void* p1,const void* p2){ //esta função vai comparar o tamanho dos elementos que serão mandados pela função qsort.
        float* a= (float *) p1;
        float* b= (float*) p2;

        if (*a > *b){
            return +1; // se a for maior do que b, manda um valor positivo
        }
        else if(*b > *a){
            return -1; // se a for menor do que b, manda valor negativo
        }
        else {
            return 0;
        }
}

int main(void)
{
   clock_t start, end;
   double cpu_time_used;

   int n;
   printf("Quantos elementos tem o vetor?");
   scanf("%d", &n); //recebe o tamanho do vetor

   float *x = (float*)malloc(n*sizeof(float));

   for (int i=0; i<n; i++){
        printf("Entre com o elemento %d do vetor", i);
        scanf("%f", &x[i]); // recebe os elementos do vetor
   }
   start = clock(); // inicia cronômetro

   for (int i = 0; i < 10000000; ++i){
   qsort (x, n, sizeof(float), compara); // função pronta que ordenará os elementos do vetor, na ordem crescente
}

   end = clock(); // termina cronômetro
   cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // transforma em segundos
   printf("O tempo necessario foi de %f segundos\n", cpu_time_used);

   for (int i=0; i<n; i++){
        printf("%f\n", x[i]); // mostra os elementos ordenados
   }

    return 0;
}

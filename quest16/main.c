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

void qsort_Juh (void *x, int n, int(*ponteiro_funcao)(const void*, const void*)){
    float temp;
    float* p = (float*) x;
    for (int i=0; i<n; i++){
       for (int j=i+1; j<n; j++){
        if (ponteiro_funcao(&p[i],&p[j]) == +1){
            temp = p[i];
            p[i]= p[j];
            p[j] = temp;
        }
       }
   }
}
int main(void)
{
   clock_t start, end;
   double cpu_time_used;
   int n;
   printf("Quantos elementos tem o vetor?");
   scanf("%d", &n);
   float *p = (float*)malloc(n*sizeof(float));

   for (int i=0; i<n; i++){
        printf("Entre com o elemento %d do vetor", i);
        scanf("%f", &p[i]);
   }
   start = clock();
   for (int i = 0; i < 10000000; ++i)
       {
           qsort_Juh(p, n, compara);
   }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("O tempo necessario foi de %f segundos\n", cpu_time_used);

    for (int i=0; i<n; i++){
         printf("%f\n", p[i]);
    }


    return 0; 
}

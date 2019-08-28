#include <stdio.h>
#include <stdlib.h>
//Júlia CCO
int main(void)
{
   int n;
   float temp;
   printf("Quantos elementos tem o vetor?");
   scanf("%d", &n);
   float *p = (float*)malloc(n*sizeof(float));

   for (int i=0; i<n; i++){
        printf("Entre com o elemento %d do vetor", i);
        scanf("%f", &p[i]);
   }

   for (int i=0; i<n; i++){
      for (int j=i+1; j<n; j++){
       if (p[i] > p[j]){
           temp = p[i];
           p[i]= p[j];
           p[j] = temp;
       }
      }
  }

   for (int i=0; i<n; i++){
        printf("%f\n", p[i]);
   }
    return 0;
}

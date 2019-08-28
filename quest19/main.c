#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Julia CCO

void multj(int** a, int** b, int** c, int nl, int ncl, int nc){
    for (int i=0; i<nl; i++){
        for (int j=0; j<nc; j++){
            for (int z=0; z< ncl; z++){
                c[i][j] = c[i][j] +(a[i][z]*b[z][j]);
            }
        }
    }
}
int main(void){
  int nl, ncl, nc; // nl=linha de A, ncl= colunas de A e linhas de B, nc=colunas de B
  printf("Entre com o número de linhas da matriz A");
  scanf("%d", &nl);
  printf("Entre com o número de colunas da matriz A e linhas da matriz B");
  scanf("%d", &ncl);
  printf("Entre com o número de colunas da matriz B");
  scanf("%d", &nc);
  int** a = (int**) malloc(nl*sizeof(int*));
  int ** b = (int**) malloc(ncl*sizeof(int*));
  int** c = (int**) malloc(nl*sizeof(int*));

  for (int i=0; i<nl; i++){
          a[i] = malloc(ncl*sizeof(int));
  }

  for (int i=0; i<ncl; i++){
          b[i] = malloc(nc*sizeof(int));
  }
  for (int i=0; i<nl; i++){
          c[i] = malloc(nc*sizeof(int));
  }
  for (int i=0; i<nl; i++){
      for (int j=0; j<ncl; j++){
          printf("Entre com o elemento %d e %d da matriz", i, j);
          scanf("%d", &a[i][j]);
      }
  }
  for (int i=0; i<ncl; i++){
      for (int j=0; j<nc; j++){
          printf("Entre com o elemento %d e %d da matriz", i, j);
          scanf("%d", &b[i][j]);
      }
  }
  printf("A matriz A eh: \n");
  for (int i=0; i<nl; i++){
      for (int j=0; j<ncl; j++){
          printf("%d\t", a[i][j]);
      }
      printf("\n");
  }
  printf("A matriz B eh:\n");
  for (int i=0; i<ncl; i++){
      for (int j=0; j<nc; j++){
          printf("%d\t", b[i][j]);
      }
      printf("\n");
  }
  multj(a, b, c, nl, ncl, nc);

  printf("A matriz C eh:\n");
  for (int i=0; i<nl; i++){
      for (int j=0; j<nc; j++){
          printf("%d\t", c[i][j]);
      }
      printf("\n");
  }

  //liberando arrays das linhas
  for(int i=0; i<nl;i++){
  free(a[i]);
  free(c[i]);
  }
  //liberando arrays das linhas
  for(int i=0; i<ncl;i++){
  free(b[i]);
  }
  //liberando array que guarda os arrays das linhas
  free(a);
  free(b);
  free(c);
  return 0;
}

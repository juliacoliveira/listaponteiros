#include <stdio.h>
int main (void){

char *c;
int *i;
float *f;
double *d ;

char c1 [4] = {'a','b','c','d'};
int i1 [4] = {2,3,4,5};
float f1 [4] = {2.2,3.3,4.4,5.5};
double d1 [4] = {2.2,3.3,4.4,5.5};

c = c1;
printf("%d\n", c); //endereço de x antes
c = c1 + 1;
printf("%d\n", c); //enderço de x+1
c= c1 + 2;
printf("%d\n", c); //enderço de x+2
c = c1 +3;
printf("%d\n", c); //enderço de x+3

i = i1;
printf("%d\n", i); //endereço de x antes
i = i1 + 1;
printf("%d\n", i); //enderço de x+1
i= i1 + 2;
printf("%d\n", i); //enderço de x+2
i = i1 +3;
printf("%d\n", i); //enderço de x+3

f = f1;
printf("%d\n", f); //endereço de x antes
f = f1 + 1;
printf("%d\n", f); //enderço de x+1
f= f1 + 2;
printf("%d\n", f); //enderço de x+2
f = f1 +3;
printf("%d\n", f); //enderço de x+3

d = d1;
printf("%d\n", d); //endereço de x antes
d = d1 + 1;
printf("%d\n", d); //enderço de x+1
d= d1 + 2;
printf("%d\n", d); //enderço de x+2
d = d1 +3;
printf("%d", d); //enderço de x+3

}

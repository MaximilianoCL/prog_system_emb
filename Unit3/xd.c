#include <stdio.h>
int arreglo[] = {2,6,1};
int i, j, n, aux;

int main() {

    n = 3;
    for(i=1; i<n; i++) {
    j = i;
    aux = arreglo[i];
    while(j>0 && aux<arreglo[j-1]) {
    arreglo[j] = arreglo[j-1];
    j=j-1;
    }
    arreglo[j] = aux;   
    }
    printf("\n\nLos elementos ordenados del arreglo son: \n");
    for(i=0; i<n; i++) {
    printf("Elemento [%d]: %d\n", i, arreglo[i]);
    };

    return 0;
}
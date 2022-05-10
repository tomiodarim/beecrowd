#include <stdio.h>

#define MAXL 100
#define MAXC 100

typedef struct {
    char nome[MAXC];
    int tempo;
} CARNE;

void printcarnes (CARNE v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s ",v[i].nome);
        if(i != n-1) printf (" ");
    }
    printf ("\n");
}

void troca(CARNE *x, CARNE *y){
    CARNE aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
  
void ordenar(CARNE v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].tempo > v[i+1].tempo) 
                troca(&v[i], &v[i+1]); 
}

void lerdados (CARNE v[], int n) {
    int i;
    for (i = 0; i < n; i++) 
        scanf ("%s %d", v[i].nome, &v[i].tempo);   
}

int main() {
    CARNE vc[MAXL]; int n;
    while(scanf("%d", &n) != EOF){
    lerdados(vc, n);
    ordenar(vc, n);
    printcarnes(vc, n);
    }
    return 0;
}

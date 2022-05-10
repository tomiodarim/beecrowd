#include <stdio.h>
#include <string.h>

#define MAXL 100
#define MAXC 100

typedef struct {
    char nome[MAXC];
    int idade;
} DOENDE;

void print(DOENDE v[], int n) {
    int i, j, aux = n/3;
    for(i=0; i < aux; i++){
        printf("Time %d\n", i+1);
        for (j = i; j < n; j+=aux) {
           printf("%s %d\n",v[j].nome, v[j].idade);
        }
        printf("\n");
    }
}

void troca(DOENDE *x, DOENDE *y){
    DOENDE aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
  
void ordenarnome(DOENDE v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].idade == v[i+1].idade) 
                if(strcmp(v[i].nome, v[i+1].nome) > 0)
                    troca(&v[i], &v[i+1]); 
}

void ordenaridade(DOENDE v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].idade < v[i+1].idade) 
                troca(&v[i], &v[i+1]); 
}

void lerdados (DOENDE v[], int *n) {
    int i;
    scanf("%d%*c", n);
    for (i = 0; i < *n; i++) 
        scanf ("%s %d%*c", v[i].nome, &v[i].idade);   
}

int main() {
    DOENDE vc[MAXL]; int n;
    lerdados(vc, &n);
    ordenaridade(vc, n);
    ordenarnome(vc, n);
    print(vc, n);
    return 0;
}

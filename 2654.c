#include <stdio.h>
#include <string.h>

#define MAXL 100
#define MAXC 100

typedef struct {
    char nome[MAXC];
    int poder, deuses, mortes, key;
} CANDIDATOS;

void troca(CANDIDATOS *x, CANDIDATOS *y){
    CANDIDATOS aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void desempate(CANDIDATOS v[], int n){
    int i, j;
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].key == v[i+1].key) 
                if(strcmp(v[i].nome, v[i+1].nome) > 0)
                    troca(&v[i], &v[i+1]); 
}

void criarkey(CANDIDATOS v[], int n){
    int i;
    for(i=0; i<n; i++){
        v[i].key = 10000*v[i].poder + 100*v[i].deuses + 99-v[i].mortes;
    }
}  

void ordenar(CANDIDATOS v[], int n){
    int i, j; 
    criarkey(v, n);
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].key < v[i+1].key) 
                troca(&v[i], &v[i+1]); 
}

void lerdados (CANDIDATOS v[], int *n) {
    int i;
    scanf("%d%*c", n);
    for (i = 0; i < *n; i++) 
        scanf ("%s %d %d %d%*c", v[i].nome, &v[i].poder, &v[i].deuses, &v[i].mortes);   
}

int main() {
    CANDIDATOS vc[MAXL]; int n;
    lerdados(vc, &n);
    ordenar(vc, n);
    desempate(vc, n);
    printf("%s\n", vc[0].nome);
    return 0;
}

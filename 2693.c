#include <stdio.h>
#include <string.h>

#define MAXL 100
#define MAXC 100

typedef struct {
    char nome[MAXC];
    int regiao, distancia, key;
} ALUNO;

void print(ALUNO v[], int n) {
    int i;
    for(i=0; i < n; i++){
        printf("%s\n",v[i].nome);
    }
}

void troca(ALUNO *x, ALUNO *y){
    ALUNO aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void criarkey(ALUNO v[], int n){
    int i;
    for(i=0; i<n; i++){
        v[i].key = 100*v[i].distancia + v[i].regiao;
    }
}  

void ordenar(ALUNO v[], int n){
    int i, j; 
    criarkey(v, n);
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i].key > v[i+1].key) 
                troca(&v[i], &v[i+1]); 
}

void lerdados (ALUNO v[], int n) {
    int i;
    for (i = 0; i < n; i++) 
        scanf ("%s %c %d%*c", v[i].nome, &v[i].regiao, &v[i].distancia);   
}

int main() {
    ALUNO va[MAXL]; int n;
    while(scanf("%d%*c", &n) != EOF){
        lerdados(va, n);
        ordenar(va, n);
        print(va, n);
    }
    printf("\n");
    return 0;
}

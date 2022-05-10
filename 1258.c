#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[25];
    char cor[25];
    char tam;
} ALUNO;

void libera(ALUNO *va[], int na){
    int i;
    for(i=0; i<na; i++)
        free(va[i]);
}

void printDados(ALUNO *va[], int na){
    int i;
    for(i=0; i<na; i++)
        printf("%s %c %s\n", va[i]->cor, va[i]->tam, va[i]->nome);
		
}

void troca(ALUNO *x, ALUNO *y){
    ALUNO aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void ordenaNome(ALUNO *v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(strcmp(v[i]->nome, v[i+1]->nome) > 0 && v[i]->tam == v[i+1]->tam) 
                troca(v[i], v[i+1]); 
}

void ordenaTam(ALUNO *v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(v[i]->tam < v[i+1]->tam) 
                troca(v[i], v[i+1]); 
}

void ordenaCor(ALUNO *v[], int n){
    int i, j; 
    for(j=n-1; j>0; j--)
        for(i=0; i<j; i++)
            if(strcmp(v[i]->cor, v[i+1]->cor) > 0) 
                troca(v[i], v[i+1]); 
}

void ordena(ALUNO *va[], int na){
    ordenaTam(va, na);
    ordenaNome(va, na);
    ordenaCor(va, na);
}

void lerDados(ALUNO *va[], int na){
    int i;
    for(i=0; i<na; i++){
        va[i] = (ALUNO *) malloc(sizeof(ALUNO));
        scanf("%[^\n]%*c", va[i]->nome);
        scanf("%s %c%*c", va[i]->cor, &va[i]->tam);
    }
}

int main () {
    ALUNO *va[100]; int na;
    scanf("%d%*c", &na);
    while(na){
        lerDados(va, na);
        ordena(va, na);
        printDados(va, na);
        libera(va, na);
        scanf("%d%*c", &na);
        if(na) printf("\n");
    }
    return 0;
}

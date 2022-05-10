#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[25];
    float preco;
    int quant;
} PROD;

typedef struct{
    int n;
    PROD itens[10];
} FEIRA;

void valor(FEIRA *f){
    int i; float sum;
    for(i=sum=0; i<(f->n); i++){
        sum += (f->itens[i].preco) * (f->itens[i].quant);
    }
    free(f);
    printf("R$ %.2f\n", sum);
}

void lerLista(FEIRA *f){
    int i, j, q; char name[25];
    scanf("%d%*c", &i);
    while(i--){
        scanf("%s %d%*c", name, &q);
        for(j=0; j<(f->n); j++){
            if(!strcmp(name, f->itens[j].nome))
                f->itens[j].quant = q;
        }
    }
}

void lerFeira(FEIRA *f){
    int i;
    f = (FEIRA *) malloc(sizeof(FEIRA));
    scanf("%d%*c", &f->n);
    for(i=0; i<(f->n); i++){
        scanf("%s %f%*c", f->itens[i].nome, &f->itens[i].preco);
        f->itens[i].quant = 0;
    }
}

int main () {
    FEIRA *f; int n; float v;
    scanf("%d%*c", &n);
    while(n--){
        lerFeira(f);
        lerLista(f);
        valor(f);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int imp; 
} PESSOA;

void saida(PESSOA p1, PESSOA p2, int s){
    if(s%2){
        if(p1.imp) printf("%s\n", p2.nome);
        else printf("%s\n", p1.nome);
    }
    else{
        if(p1.imp) printf("%s\n", p1.nome);
        else printf("%s\n", p2.nome);
    }
}

void analise(PESSOA *p, char *str){
    if(strcmp(str, "IMPAR")) p->imp = 1;
    else p->imp = 0;
}

int lerp(PESSOA *p1, PESSOA *p2){
    char aux1[10], aux2[10]; int i1, i2;
    scanf("%s %s %s %s", p1->nome, aux1, p2->nome, aux2);
    scanf("%d %d", &i1, &i2);
    analise(p1, aux1);
    analise(p2, aux2);
    return i1+i2;
}

int main(){
    int n, s; PESSOA p1, p2;
    scanf("%d", &n);
    while(n--){
        s = lerp(&p1, &p2);
        saida(p1, p2, s);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void elimina(char s[], int n, int t){
    int i;
    for(i=n; i<=t; i++)
        s[i] = s[i+1];
}

int isCons(char c){
    return islower(c) && !(c =='a') && !(c =='e') && !(c =='i') && !(c =='o') && !(c =='u');
}

void eliminaCons(char s[], int t){
    int i;
    for(i=0; i<=t; i++){
        if(isCons(s[i])){
            elimina(s, i, t);
            i--;
        }
    } 
}

void troca(char *x, char *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void inverte(char s[], int t){
    int i; 
    for(i=0; i<=t/2; i++)
        troca(&s[i], &s[t-i]);
}

int isEngracado(char s[]){
    int t = strlen(s) - 1;
    char cp[150];
    eliminaCons(s, t);
    t = strlen(s) - 1;
    strcpy(cp, s);
    inverte(cp, t);
    if(strcmp(s, cp)) return 0;
    else return 1;
}

int main(){
    char s[150];
    scanf("%[^\n]%*c", s);
    if(isEngracado(s)) printf("S\n");
    else printf("N\n");

    return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void terceiro(char s[], int t){
    int i;
    for(i=t/2.0 + 0.5; i<=t; i++){
        s[i] = s[i] - 1;
    }
}

void troca(char *x, char *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void segundo(char s[], int t){
    int i;
    for(i=0; i<=t/2; i++){
        troca(&s[i], &s[t-i]);
    }
}

void primeiro(char s[]){
    int i;
    for(i=0; s[i]; i++){
        if(isalpha(s[i])) s[i] = s[i] + 3;
    }
}

void criptografar(char s[]){
    int t = strlen(s)-1;
    primeiro(s);
    segundo(s, t);
    terceiro(s, t);
}

int main(){
    int n; char str[1001];
    scanf("%d ", &n);
    while(n--){
        gets(str);
        criptografar(str);
        printf("%s\n", str);
    }
    return 0;
}

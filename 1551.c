#include <stdio.h>
#include <string.h>

int pertence(char str[], char c){
    int i;
    for(i=0; str[i]; i++)
        if(str[i] == c) return 1;
    return 0;
}

int contaLetras(char c[]){
    int i, t; char letras[27]={"abcdefghijklmnopqrstuvwxyz"};
    for(i=t=0; i<26; i++)
        t += pertence(c, letras[i]);
    return t;
}

int main(){
    int n, l; char s[1005];
    scanf("%d ", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        l = contaLetras(s);
        if(l == 26) printf("frase completa\n"); else
        if(l >= 13 && l < 26) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeSpace(char s[]){
    int i;
    for(i=0; s[i]; i++){
        if(s[i] == ' '){
            elimina(s, i);
            i--;
        }
    }        
}

void elimina(char s[], int n){
    int i;
    for(i=n; s[i]; i++)
        s[i] = s[i+1];
}

void removeletras(char s[]){
    int i;
    for(i=0; s[i]; i++){
        if(isalpha(s[i]) && s[i-1] != ' '){
            elimina(s, i);
            i--;
        }
    }        
}

void addchar(char c, char s[], int p){
    int i;
    for(i=strlen(s)+1; i>p; i--)
        s[i] = s[i-1];
    s[p] = c;
}

void decodifica(char s[]){
    addchar(' ', s, 0);
    removeletras(s);
    removeSpace(s);
}

int main(){
    char s[55]; int n;
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        decodifica(s);
        printf("%s\n", s);
    }

    return 0;
}
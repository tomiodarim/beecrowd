#include <stdio.h>
#include <string.h>

void elimina(char s[], int n){
    int i;
    for(i=n+2; i<strlen(s); i++)
        s[i] = s[i+2];
}

void repete(char s[]){
    int i;
    for(i=0; i<strlen(s)-2; i++)
        if(s[i] == s[i+2] && s[i+1] == s[i+3]) elimina(s, i);
}

int main(){
    char s[15001];
    scanf("%[^\n]%*c", s);
    repete(s);
    printf("%s\n", s);

    return 0;
}

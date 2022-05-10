#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printSenha(char s[]){
    int i=2;
    while(s[i]=='0') i++; 
    for(; i<20; i++)
        printf("%c", s[i]);
    printf("\n");
}

int isValid(char s[]){
    int i, c;
    if(strlen(s) != 20) return 0;
    if(s[0] != 'R' || s[1] != 'A') return 0;
    for(i=2; i<20; i++)
        if(isalpha(s[i])) return 0;
    for(i=2, c=0; i<20; i++)
        if(s[i] == '0') c++;
    if(c > 17) return 0;
    return 1;
}

int main(){
    int n; char s[101];
    scanf("%d ", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        if(isValid(s)) printSenha(s);
        else printf("INVALID DATA\n");
    }
    return 0;
}

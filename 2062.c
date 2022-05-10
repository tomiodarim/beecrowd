#include <stdio.h>
#include <string.h>

int isWord(char s[]){
    if(s[0] == 'U')
        if(s[1] == 'R') return 1;
    if(s[0] == 'O')
        if(s[1] == 'B') return 1;
    return 0;
}

void corrigir(char s[]){
    int t = strlen(s);
    if(t != 3) return;
    if(isWord(s)) s[2] = 'I';
} 

int main(){
    int n; char s[25];
    scanf("%d ", &n);
    while(n--){
        scanf("%s", s);
        corrigir(s);
        if(n) printf("%s ", s);
		else printf("%s", s);
    }
    printf("\n");
    return 0;
}
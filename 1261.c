#include <stdio.h>

int processos(char s[], int n){
    int i, p, t;
    for(i=p=t=0; s[i]; i++){
        if(s[i] == 'W'){
            p++;
            t = 0;
        }
        else if(t == 0){
            p++; t++;
        }
        else t++;
        if(t==n) t=0;
    }
    return p;  
}

int main(){
    char s[55]; int n;
    while(scanf("%[^\n]%*c", s) != EOF){
        scanf("%d%*c", &n);
        printf("%d\n", processos(s, n));
    }

    return 0;
}
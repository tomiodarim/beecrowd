#include <stdio.h>
#include <string.h>

int isCorrect(char s[]){
    int i, parenteses;
    for(i=parenteses=0; s[i] && parenteses>=0; i++){
        if(s[i] == '(') parenteses++;
        if(s[i] == ')') parenteses--;
    }
    if(parenteses) return 0;
    else return 1;
}

int main(){
    char s[1001];
    while(scanf("%[^\n]%*c", s) != EOF){
        if(isCorrect(s)) printf("correct\n");
        else printf("incorrect\n");
    }
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int codigo(int *v, int t){
    int c = 0, *f = v+t-1;
    while(v < f){
        c += (*v++ >= *f);
    }
    return c;
}

char* numero(char *s, int *v){
    int x = 0; 
    while(isdigit(*s)){
        x = x*10 + *s-'0';
        s++;
    }
    *v = x;
    return s;
}

void toInt(char *s, int *v, int *t){
    *t = 0;
    while(*s){
        if(isdigit(*s)){
            s = numero(s, v++);
            *t = *t+1;
        } 
        s++;
    }
}

void addChar(char s[]){
    int t = strlen(s);
    s[t] = 'a';
    s[t+1] = '\0';
}

int main(){
    int n, v[100], t; char s[1000];
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        addChar(s);
        toInt(s, v, &t);
        printf("%d\n", codigo(v, t));
    }

    return 0;
}

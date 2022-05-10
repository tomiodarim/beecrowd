#include <stdio.h>
#include <string.h>

void codificar(char s[], int x){
    int i;
    for(i=0; s[i]; i++){
        if(s[i] - x < 65) s[i] = s[i] - x + 26;
        else s[i] = s[i] - x;
    }
}

int main(){
    int n, x; char s[55];
    scanf("%d ", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        scanf("%d%*c", &x);
        codificar(s, x);
        printf("%s\n", s);
    }
    return 0;
}
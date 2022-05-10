#include <stdio.h>
#include <ctype.h>

void toDancing(char s[]){
    int c, i;
    for(i=0, c=1; s[i]; i++){
        if(islower(s[i]) && c%2) s[i] = s[i] - 32;
        if(isupper(s[i]) && c%2==0) s[i] = s[i] + 32;
        if(isalpha(s[i])) c++;
    }
}

int main(){
    char s[55];
    while(scanf("%[^\n]%*c", s) != EOF){
        toDancing(s);
        printf("%s\n", s);
    }
    return 0;
}
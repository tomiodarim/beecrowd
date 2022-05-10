#include <stdio.h>
#include <string.h>

int isONE(char s[]){
    int c = 0;
    c += s[0] == 'o';
    c += s[1] == 'n';
    c += s[2] == 'e';
    return c>=2;
}

int main(){
    int n, c; char s[10];
    scanf("%d ", &n);
    while(n--){
        c = 0;
        scanf("%[^\n]%*c", s);
        if(strlen(s) == 5) printf("3\n"); else
        if(isONE(s)) printf("1\n"); else
        printf("2\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>

#define MAX 1005

int verifica(char mat[][MAX], char *str, int l){
    int i;
    if(l==0){
        strcpy(mat[0], str);
        return 1;
    }
    for(i=0; i<l; i++)
        if(strcmp(mat[i], str) == 0) return 0;
    strcpy(mat[l], str);
    return 1;
}

int main(){
    char m[MAX][MAX], str[MAX]; int n, l=0;
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", str);
        l += verifica(m, str, l);
    }
    printf("Falta(m) %d pomekon(s).", 151-l);
    return 0;
}
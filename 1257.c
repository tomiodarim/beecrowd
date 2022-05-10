#include<stdio.h>

int hash(char s[], int l){
    int i, somaLinha;
    for(i=somaLinha=0; s[i]; i++)
        somaLinha += s[i]-65+i+l;
    return somaLinha;
}

int main(){
    int n, l, i, soma; char s[51];
    scanf("%d%*c", &n);
    while(n--){
        soma=0;
        scanf("%d%*c", &l);
        for(i=0; i<l; i++){
            scanf("%[^\n]%*c", s);
            soma += hash(s, i);
        }
        printf("%d\n", soma);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void espelho(int ini, int fim){
    char num[100]; int i, j;
    for(i=ini; i<=fim; i++){
        printf("%d", i);
    } 
    for(i=fim; i>=ini; i--){
        sprintf(num, "%d", i);
        for(j = strlen(num)-1; j>=0; j--) printf("%c", num[j]);
    }
    printf("\n");
}

int main(){
    int n, inicio, fim;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d", &inicio, &fim);
        espelho(inicio, fim);
    }
    return 0;
}
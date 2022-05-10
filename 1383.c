#include <stdio.h>

#define MAXL 100
#define MAXC 100

int quadrado(int mat[][MAXC]){
    int i, j, c, x, y, n;
    for(n=c=0; n<9; c=0, n++){
        x = n-(n%3);
        y = (n%3)*3;
        for(i=x; i<x+3; i++)
            for(j=y; j<y+3; j++)
                c += mat[i][j] * mat[i][j];
        if(c != 285) return 0;
    }
    return 1;
}

int coluna(int mat[][MAXC]){
    int i, j, c;
    for(i=c=0; i<9; c=0, i++){
        for(j=0; j<9; j++)
            c += mat[j][i] * mat[j][i];
        if(c != 285) return 0;
    }
    return 1;
}

int linha(int mat[][MAXC]){
    int i, j, c;
    for(i=c=0; i<9; c=0, i++){
        for(j=0; j<9; j++)
            c += mat[i][j] * mat[i][j];
        if(c != 285) return 0;
    }
    return 1;
}

int isSudoku(int mat[][MAXC]){
    if(!linha(mat)) return 0;
    if(!coluna(mat)) return 0;
    if(!quadrado(mat)) return 0;
    return 1;
}

void lermat(int mat[][MAXC]) {
    int i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int m[MAXL][MAXC], n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        lermat(m);
        if(isSudoku(m)) printf("Instancia %d\nSIM\n", i);
        else printf("Instancia %d\nNAO\n", i);
        printf("\n");
    }
    return 0;
}

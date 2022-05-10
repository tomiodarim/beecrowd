#include <stdio.h>

#define MAXL 100
#define MAXC 100

int is3(int mat[][MAXC], int l, int c) {
    int i, j;
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++){
            if((i==0 || j==0 || i==l-1 || j==c-1) && mat[i][j] != 1) return 0;
            if((i!=0 && j!=0 && i!=l-1 && j!=c-1) && mat[i][j] != 0) return 0;
        }
    return 1;
}

int is2(int mat[][MAXC], int l, int c) {
    int i, j, n;
    if(l != c) return 0;
    for (i = 0, n=c-1; i < l; i++, n--)
        for (j = 0; j < c; j++){
            if(i+n == c-1 && mat[i][n] != 1) return 0;
            if(i+n != c-1 && mat[i][j] != 0) return 0;
        }
    return 1;
}

int is1(int mat[][MAXC], int l, int c) {
    int i, j;
    if(l != c) return 0;
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++){
            if(i==j && mat[i][j] != 1) return 0;
            if(i!=j && mat[i][j] != 0) return 0;
        }
    return 1;
}

int tipoMat(int mat[][MAXC], int l, int c){
    if(is1(mat, l, c)) return 1;
    if(is2(mat, l, c)) return 2;
    if(is3(mat, l, c)) return 3;
    return 0;
}

void lermat(int mat[][MAXC], int *l, int *c) {
    int i, j;
    scanf("%d %d", l, c);
    for (i = 0; i < *l; i++)
        for (j = 0; j < *c; j++) 
            scanf("%d", &mat[i][j]);
}

int main () {
    int m[MAXL][MAXC], nl, nc;
    lermat(m, &nl, &nc);
    printf("%d\n", tipoMat(m, nl, nc));

    return 0;
}
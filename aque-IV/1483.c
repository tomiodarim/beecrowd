#include <stdio.h>

#define MAXL 100
#define MAXC 100

int linhasPares(int mat[][MAXC], int l, int c){
    int i, j, lpar, t;
    for (i = lpar = 0; i < l; i++){
        for (j = t = 0; j < c; j++) 
            if(mat[i][j] % 2) t++;
    if(t == 0) lpar++;
    }  
    return lpar;  
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
    printf("%d\n", linhasPares(m, nl, nc));

    return 0;
}

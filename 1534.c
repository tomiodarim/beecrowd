#include <stdio.h>
#include <math.h>

#define MAXL 105
#define MAXC 105

void printmat (int mat[][MAXC], int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            printf ("%d", mat[i][j]);
        }
    printf ("\n");
  }
}

void preencherMat (int mat[][MAXC], int n) {
    int i, j, t = n-1;
    for (i = 0; i < n; i++, t--) {
        for (j = 0; j < n; j++){
            mat[i][j] = 3;
            if(i==j) mat[i][j] = 1;
            if(j==t) mat[i][j] = 2;
        }
  }
}

int main () {
    int m[MAXL][MAXC], n;
    while(scanf("%d", &n) != EOF){
        preencherMat(m, n);
        printmat (m, n);
    }
    return 0;
}

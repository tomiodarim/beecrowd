#include <stdio.h>

#define MAXL 100
#define MAXC 100

void printmat (int mat[][MAXC], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            printf ("%3d", mat[i][j]);
            if(j!=n-1)printf(" ");
        }
    printf ("\n");
  }
    printf ("\n");
}

void preencherMat (int mat[][MAXC], int n) {
    int i, j, x, y;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            x = 1 + i - j;
            y = 1 + j - i;
            mat[i][j] = (x < y ? y : x);
        }
  }
}

int main () {
    int m[MAXL][MAXC], n;
    scanf("%d", &n);
    while(n!=0){
        preencherMat(m, n);
        printmat (m, n);
        scanf("%d", &n);
    }
    return 0;
}

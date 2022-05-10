#include <stdio.h>
#include <math.h>

#define MAXL 100
#define MAXC 100

void printmat (int mat[][MAXC], int n) {
    int i, j, t;
    t = log10(pow(2, n+n-2))+1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            printf ("%*d",t, mat[i][j]);
            if(j!=n-1)printf(" ");
        }
    printf ("\n");
  }
    printf ("\n");
}

void preencherMat (int mat[][MAXC], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            mat[i][j] = pow(2,i+j);
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

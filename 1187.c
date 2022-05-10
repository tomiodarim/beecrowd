#include <stdio.h>

#define MAXL 100
#define MAXC 100

void soma(double mat[][MAXC], double *r, int *n){
    int i, j, aux = 11;
    for(i=*r=*n=0; i<12; i++, aux--)
        for(j=0; j<12; j++)
            if(j>i && j<aux){
               *r = *r + mat[i][j];
               *n = *n + 1; 
            } 
}

double conta(double mat[][MAXC], int ch){
    double r; int n;
    soma(mat, &r, &n);
    if(ch == 'S') return r;
    else return r/n;
}

void lermat(double mat[][MAXC]) {
    int i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) 
            scanf("%lf", &mat[i][j]);
  }
}

int main () {
    double m[MAXL][MAXC]; int ch;
    scanf("%c", &ch);
    lermat(m);
    printf("%.1f\n", conta(m, ch));

    return 0;
}


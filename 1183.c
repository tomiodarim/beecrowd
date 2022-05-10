#include <stdio.h>

#define MAXL 100
#define MAXC 100

void soma(float mat[][MAXC], float *r, int *n){
    int i, j;
    for(i=*n=*r=0; i<12; i++)
        for(j=0; j<12; j++)
            if(j>i){
               *r = *r + mat[i][j];
               *n = *n + 1; 
            } 
}

float conta(float mat[][MAXC], int ch){
    float r; int n;
    soma(mat, &r, &n);
    if(ch == 'S') return r;
    else return r/n;
}

void lermat(float mat[][MAXC]) {
    int i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) 
            scanf("%f", &mat[i][j]);
  }
}

int main () {
    float m[MAXL][MAXC]; int ch;
    scanf("%c", &ch);
    lermat(m);
    printf("%.1f\n", conta(m, ch));

    return 0;
}


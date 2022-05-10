#include <stdio.h>

#define MAXL 100
#define MAXC 100

float soma(float mat[][MAXC], int c){
    int i; float t;
    for(i=t=0; i<12; t+=mat[i++][c]);
    return t;
}

float linha(float mat[][MAXC], int col, int ch){
    float r = soma(mat, col);
    if(ch == 'S') return r;
    else return r/12;
}

void lermat(float mat[][MAXC]) {
    int i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) 
            scanf("%f", &mat[i][j]);
  }
}

int main () {
    float m[MAXL][MAXC]; int col, ch;
    scanf("%d %c", &col, &ch);
    lermat(m);
    printf("%.1f\n", linha(m, col, ch));

    return 0;
}


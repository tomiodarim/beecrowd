#include <stdio.h>

#define MAXL 100
#define MAXC 100

float soma(float mat[][MAXC], int l){
    int i; float t;
    for(i=t=0; i<12; t+=mat[l][i++]);
    return t;
}

float linha(float mat[][MAXC], int l, int ch){
    float r = soma(mat, l);
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
    float m[MAXL][MAXC]; int l, ch;
    scanf("%d %c", &l, &ch);
    lermat(m);
    printf("%.1f\n", linha(m, l, ch));

    return 0;
}


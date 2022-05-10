#include <stdio.h>
#include <math.h>

#define MAXL 105
#define MAXC 105

void printmat (unsigned long long mat[][MAXC], int n, int c, int maior[]) {
    int i, j, t;
    printf ("Quadrado da matriz #%d:\n", 4+c);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            printf ("%*llu", maior[j], mat[i][j]);
            if(j<n-1)printf (" ");
        }
    printf ("\n");
  }
}

void tamanhoColunas(unsigned long long mat[][MAXC], int n, int maior[]) {
    int i, j;
    for (j = 0; j < n; j++){
        if(mat[0][j] == 0) maior[j] = 1;
        else maior[j] = log10(mat[0][j]) + 1;
        for (i = 1; i < n; i++){
            if(maior[j] < log10(mat[i][j]) + 1) 
                maior[j] = log10(mat[i][j]) + 1;
        }
    }   
}

void lermat(unsigned long long mat[][MAXC], int *n) {
    int i, j;
    scanf("%d", n);
    for (i = 0; i < *n; i++) 
        for (j = 0; j < *n; j++){
            scanf("%llu", &mat[i][j]);
            mat[i][j] *= mat[i][j];
        }
}

int main () {
    unsigned long long m[MAXL][MAXC]; int n, casos, i, maior[100];
    scanf("%d", &casos);
    for(i=0; i<casos; i++){
        lermat(m, &n);
        tamanhoColunas(m, n, maior);
        printmat (m, n, i, maior);
        if(i<casos-1) printf ("\n");
    }
    return 0;
}

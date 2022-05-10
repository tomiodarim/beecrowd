#include <stdio.h>

void frase(int m[][100], char s[], int c){
    int i, j, F, L, M;
    for(F=i=0; i<4; i++)
        F = F*10 + m[i][0];
    for(L=i=0; i<4; i++)
        L = L*10 + m[i][c-1];
    for(j=1; j<c-1; j++){
        for(i=M=0; i<4; i++)
            M = M*10 + m[i][j];
        s[j-1] = (F*M+L)%257;
    }
    s[j-1] = 0;
}

int toInt(char mc[][100], int mi[][100]){
    int i, j, c;
    for(c=j=0; mc[0][j]; c++, j++)
        mi[0][j] = mc[0][j]-'0';
    for(i = 1; i < 4; i++) 
        for(j = 0; j < c; j++)
            mi[i][j] = mc[i][j]-'0';
    return c;
}

void lermat(char mat[][100]) {
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%s", mat[i]);
  }
}

int main () {
    char mc[4][100], str[100]; int mi[4][100], c;
    lermat(mc);
    c = toInt(mc, mi);
    frase(mi, str, c);
    printf("%s\n", str);
    return 0;
}


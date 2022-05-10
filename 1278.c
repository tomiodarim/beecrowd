#include<stdio.h>
#include<string.h>
#include<ctype.h>

void print(char mat[][100], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", mat[i]);
}

void mover(char str[], int t, int m) {
    int i;
    for(i=t; i >= 0;){
        str[m--] = str[i--];
    }
    while(m>=0){
        str[m--] = ' ';
    }
}

int maior(char mat[][100], int n) {
    int i, m, t;
    m = strlen(mat[0]);
    for(i=1; i<n; i++){
        t = strlen(mat[i]);
        if(t > m) m = t;
    }
    return m;
}

void elimina(char s[], int n){
    int i;
    for(i=n; s[i]; i++)
        s[i] = s[i+1];
}

void removeSpace(char mat[][100], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; mat[i][j]; j++)
            if(mat[i][j] == ' ' && (j == 0 || mat[i][j+1] == ' ' || mat[i][j+1] == '\0')){
                elimina(mat[i], j);
                j--;
            } 
}

void justificar(char mat[][100], int n) {
    int i, m, t;
    removeSpace(mat, n);
    m = maior(mat, n);
    for(i = 0; i<n; i++){
        t = strlen(mat[i]);
        if(t != m){
            mover(mat[i], t, m);
        }
    }

}

void lermat(char mat[][100], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%[^\n]%*c", mat[i]);
}

int main(){
	char m[100][100]; int n;
	scanf("%d%*c", &n);
    while(n != 0){
        lermat(m, n);
        justificar(m, n);
        print(m, n);
        scanf("%d%*c", &n);
				if(n!=0) printf("\n");
    }  
    return 0;
}

#include <iostream>
using namespace std;

void print(int mat[][100], int n, int m){
    int i, j, c=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++, c=0){
            if(mat[i][j]) cout << "9";
            else {
                if (i) c += mat[i-1][j];
                if (j)c += mat[i][j-1];
                if (i != n-1)c += mat[i+1][j];
                if (j != m-1)c += mat[i][j+1];
                cout << c;
            }
        }
        cout << endl;
    }
}

void lermat(int mat[][100], int n, int m){
    int i, j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> mat[i][j];
}

int main(){
    int n, m, i, j, mat[100][100];
    while(scanf("%d%d", &n, &m) != EOF){
        lermat(mat, n, m);
        print(mat, n, m);
    }

    return 0;
}
 

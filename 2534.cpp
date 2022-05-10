#include <iostream>

using namespace std;

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
    return;
}

void ordena(int notas[], int n){
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(notas[i] < notas[j]) troca(&notas[i], &notas[j]);
}

int main(){
    int i, n, q, notas[100];
    while(scanf("%d%d", &n, &q) != EOF){
        for(i=0; i<n; i++)
            cin >> notas[i];
        ordena(notas, n);
        while(q--){
            cin >> n;
            cout << notas[n-1] << endl;
        }
    }

    return 0;
}
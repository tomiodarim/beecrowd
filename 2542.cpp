#include <iostream>

using namespace std;

int main(){
    int i, j, n, m, l, cm, cl, a, cartas[200][100];
    while(scanf("%d ", &n) != EOF){
        cin >> m >> l;
        for(i=0; i<m+l; i++)
            for(j=0; j<n; j++)
                cin >> cartas[i][j];
        cin >> cm >> cl;
        cin >> a;

        if(cartas[cm-1][a-1] > cartas[m+cl-1][a-1]) cout << "Marcos\n";
        else if(cartas[cm-1][a-1] < cartas[m+cl-1][a-1]) cout << "Leonardo\n";
        else cout << "Empate\n";
    }
    return 0;
}
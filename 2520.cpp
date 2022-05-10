#include <iostream>

using namespace std;

int distancia(int l, int c, int m[][100]){
    int i, j, l1, c1, l2, c2;
    for(i=0; i<l; i++)
        for(j=0; j<c; j++){
            if(m[i][j] == 1){
                l1 = i;
                c1 = j;
            }
            if(m[i][j] == 2){
                l2 = i;
                c2 = j;
            }
        }
    return abs(c2-c1) + abs(l2-l1);
}

void lermat(int l, int c, int m[][100]){
    int i, j;
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            cin >> m[i][j];
}

int main(){
    int d, l, c, m[100][100];
    while(scanf("%d%d", &l, &c)!=EOF){
        lermat(l, c, m);
        d = distancia(l,c,m);
        cout << d << endl;
    }

    return 0;
}
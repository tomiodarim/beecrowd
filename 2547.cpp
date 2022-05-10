#include <iostream>

using namespace std;

int main(){
    int n, amin, amax, aux, c; 
    while(scanf("%d%d%d", &n, &amin, &amax) != EOF){
        c = 0;
        while(n--){
            cin >> aux;
            if(aux >= amin && aux <= amax) c++;
        }
        cout << c << endl;
    }

    return 0;
}
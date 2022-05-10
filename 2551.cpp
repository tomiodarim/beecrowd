#include <iostream>
using namespace std;

int main(){
    int i, n; float t, d, r;
    while(scanf("%d", &n) != EOF){
        for(r=0, i=1; i<=n; i++){
            cin >> t >> d;
            if(d/t > r){
                r = d/t;
                cout << i << endl;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int i, j, n, d, dia, mes, ano, c, p, f;
    while(scanf("%d%d", &n, &d) != EOF){
        for(f=i=0; i<d; i++){
            scanf("%d/%d/%d", &dia, &mes, &ano);
            for(c=j=0; j<n; j++){
                cin >> p;
                c += p;
            }
            if(c==n && !f){
                cout << dia << "/" << mes << "/" << ano << endl;
                f = 1;
            }
        }
        if(!f) cout << "Pizza antes de FdI\n";
    }

    return 0;
}
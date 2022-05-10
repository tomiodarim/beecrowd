#include <iostream>

using namespace std;

int main(){
    int n, l; char alf[30]; string s;
    while(scanf("%s", &alf) != EOF){
        s = "";
        cin >> n;
        while(n--){
            cin >> l;
            s += alf[l-1];
        }
        cout << s << endl;
    }
    return 0;
}
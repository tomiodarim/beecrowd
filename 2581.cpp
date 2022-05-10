#include <iostream>
using namespace std;

int main(){
    int n; char q[100];
    while(scanf("%d%*c", &n) != EOF){
        while(n--){
            scanf("%[^\n]%*c", &q);
            cout << "I am Toorg!\n";
        }
    }

    return 0;
}
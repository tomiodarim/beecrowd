#include <iostream>
 
using namespace std;
 
int main() {
    int n, id, c, al, ga;
    while(scanf("%d%d", &n, &id) != EOF){
        c=0;
        while(n--){
            cin >> al >> ga;
            if(id == al && !ga) c++;
        }
        cout << c << endl;
    }
    return 0;
}
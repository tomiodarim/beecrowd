#include <iostream>

using namespace std;

int main(){
    int n, a1, a2, s1, s2;
    while(scanf("%d", &n) != EOF){
        s1 = s2 = 0;
        while(n--){
            cin >> a1 >> a2;
            s1 += a1*a2;
            s2 += a2*100;
        }
        printf("%.4f\n", 1.0*s1/s2);
    }

    return 0;
}
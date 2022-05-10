#include <iostream>
 
using namespace std;
 
int main() {
    int i, a; float n, c;
    while(scanf("%f", &n) != EOF){
        c = 0;
        for(i=0; i<n; i++){
            scanf("%d", &a);
            if(a) c++;
        }
        if(c >= n*2/3) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }

    return 0;
}
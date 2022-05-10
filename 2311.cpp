#include <iostream>

using namespace std;

int main(){
    int i, j, n; float gd, c, ma, me, a; char s[25];
    scanf("%d%*c", &n);
    for(i=0; i<n; i++){
        scanf("%[^\n]%*c%f", &s, &gd);
        scanf("%f", &c);
        ma = me = c;
        for(j=0; j<6; j++){
            scanf("%f%*c", &a);
            if(a < me) me = a;
            if(a > ma) ma = a;
            c += a;
        }
        c = c-ma-me;
        printf("%s %.2f\n", s, gd*c);

    }

    return 0;
}
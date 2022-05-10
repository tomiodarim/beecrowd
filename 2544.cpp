#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double n;
    while(scanf("%lf", &n) != EOF)
        printf("%.0lf\n", log2(n));
    return 0;
}
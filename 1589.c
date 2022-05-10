#include<stdio.h>

int main(){
    int t; double r1, r2;
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf", &r1, &r2);
        printf("%.0lf\n", r1+r2);
    }
    return 0;
}
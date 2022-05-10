#include <stdio.h>

int main(){
    long double p;
    scanf("%LF", &p);
    while (p!=-1){
        if(p) p--;
        printf("%.0LF\n", p);
        scanf("%LF", &p);
    }

    return 0;
}
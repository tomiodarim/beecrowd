#include<stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n) printf("vai ter duas!\n");
        else printf("vai ter copa!\n");
    }
    return 0;
}
#include<stdio.h>

int get_maior(int n){
    int i, t, m;
    scanf("%d", &m);
    for(i=1; i<n; i++){
        scanf("%d", &t);
        if(t>m) m=t;
    }
    return m;
}

int main(){
    int n, m;
    while(scanf("%d", &n) != EOF){
        m = get_maior(n);
        if(m<10) printf("1\n");
        if(m>=10 && m<20) printf("2\n");
        if(m>=20) printf("3\n");
    }
    return 0;
}
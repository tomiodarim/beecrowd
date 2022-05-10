#include <stdio.h>

int main(){
    int caso, n, i, j, s;
    for(caso=1; scanf("%d", &n) != EOF; caso++){
        for(i=s=1; i<=n; s+=i, i++);
        if(s==1) printf("Caso %d: 1 numero\n", caso);
        else printf("Caso %d: %d numeros\n", caso, s);
        i=0;
        if(n) {
            printf("0 ");
            for(; i<n; i++)
                for(j=0; j<i; j++)
                    printf("%d ", i);
            for(j=0; j<i-1; j++)
                printf("%d ", i);
        }
        printf("%d\n\n", i);
    }
    return 0;
}
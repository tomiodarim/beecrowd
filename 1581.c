#include <stdio.h>
#include <string.h>

int identicas(char sx[], char sy[]){
    int i;
    for(i=0; sx[i] && sx[i] == sy[i]; i++);
    return sx[i] == sy[i];
}

int main(){
    int n, k, t; char s1[25], s2[25];
    scanf("%d ", &n);
    while(n--){
        scanf("%d ", &k);
        scanf("%[^\n]%*c", s1);
        t = 0;
        while(--k){
            scanf("%[^\n]%*c", s2);
            if(!(identicas(s1, s2))) t++;
            strcpy(s1, s2);
        }
        if(t)printf("ingles\n");
        else printf("%s\n", s1);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

void combinar(char s1[], char s2[], char c[]){
    int i, j;
    for(i=j=0; s1[j] && s2[j]; i++){
        if(i%2){
           c[i] = s2[j];
           j++; 
        } 
        else c[i] = s1[j];
    }
    if(strlen(s1)>strlen(s2))
        for(;s1[j-1]!=0; c[i]=s1[j], i++, j++);
    else
        for(;s2[j-1]!=0; c[i]=s2[j], i++, j++);
}

int main(){
    int n; char s1[55], s2[55], combined[105];
    scanf("%d", &n);
    while(n--){
        scanf("%s%*c", s1);
        scanf("%[^\n]%*c", s2);
        combinar(s1, s2, combined);
        printf("%s\n", combined);
    }
    return 0;
}
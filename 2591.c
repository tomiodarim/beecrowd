#include <stdio.h>

void print(int a){
    int i;
    printf("k");
    for(i=0; i<a; i++)
        printf("a");
    printf("\n");
}

int contachar(char str[], char c){
    int i, t;
    for(i=t=0; str[i]!='\0'; i++)
        t += (str[i] == c);
    return t;
}

int main(){
    int n, a; char s1[100], s2[100];
    scanf("%d ", &n);
    while(n--){
        scanf("%[^k]", s1);
        scanf("%[^\n]%*c", s2);
        a = contachar(s1, 'a') * contachar(s2, 'a');
        print(a);
    }
    return 0;
}

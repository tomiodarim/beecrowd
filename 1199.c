#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toHex(char *n){
    int dec, resto, i; char hex[10];
    dec = atoi(n);
    printf("0x");
    for(i = 0; dec > 0; i++){
        resto = dec % 16;
        if(resto <= 9)
            hex[i] = resto + '0';
        else
            hex[i] = resto - 10 + 'A';
        dec /= 16;
        }
    for(i--; i>=0; i--)
        printf("%c", hex[i]);
    printf("\n");
}


void toInt(char n[]){
    int i, m, num, temp;
    for(i = strlen(n)-1, m=1, num=0; i >= 2; i--){
        if(n[i] <= '9')
            temp = n[i] - '0';
        else if(n[i] >= 'a')
                temp = n[i] - 'a' + 10;
            else
                temp = n[i] - 'A' + 10;
        num += temp * m;
        m *= 16;
    }
    printf("%d\n", num);
}

int main(){
    char n[15];
    scanf("%s", &n);
    while(n[0]!='-'){
        if(n[1] == 'x') toInt(n);
        else toHex(n);
        scanf("%s", &n);
    }
    return 0;
}
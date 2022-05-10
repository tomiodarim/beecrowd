#include <stdio.h>

void toRoman(int n, char r[]){
    int i=0;
    while(n >= 1000){
        r[i] = 'M';
        i++;
        n -= 1000;
    }
    if(n >= 900){
        r[i] = 'C';
        r[i+1] = 'M';
        i += 2;
        n -= 900;
    }
    if(n >= 500){
        r[i] = 'D';
        i++;
        n -= 500;
    }
    if(n >= 400){
        r[i] = 'C';
        r[i+1] = 'D';
        i += 2;
        n -= 400;
    }
    while(n >= 100){
        r[i] = 'C';
        i++;
        n -= 100;
    }
    if(n >= 90){
        r[i] = 'X';
        r[i+1] = 'C';
        i += 2;
        n -= 90;
    }
    if(n >= 50){
        r[i] = 'L';
        i++;
        n -= 50;
    }
    if(n >= 40){
        r[i] = 'X';
        r[i+1] = 'L';
        i += 2;
        n -= 40;
    }
    while(n >= 10){
        r[i] = 'X';
        i++;
        n -= 10;
    }
    if(n == 9){
        r[i] = 'I';
        r[i+1] = 'X';
        i += 2;
        n -= 9;
    }
    if(n >= 5){
        r[i] = 'V';
        i++;
        n -= 5;
    }
    if(n == 4){
        r[i] = 'I';
        r[i+1] = 'V';
        i += 2;
        n -= 4;
    }
    while(n--){
        r[i] = 'I';
        i++;
    }
    r[i] = '\0';
}

int main(){
    int n; char r[25];
    scanf("%d", &n);
    toRoman(n, r);
    printf("%s\n", r);
    return 0;
}
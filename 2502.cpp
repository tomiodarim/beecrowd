#include <iostream>
#include <ctype.h>
using namespace std;

char cript(char cifra[], int n, char c){
    int i;
    for(i=0; cifra[i]; i++){
        if(c == cifra[i]+32 && (c>='a' && c<='z'))
            if(i < n) 
                if(isalpha(cifra[i+n]))return cifra[i+n]+32;
                else return cifra[i+n];
            else 
                if(isalpha(cifra[i-n]))return cifra[i-n]+32;
                else return cifra[i-n];
        else if(c == cifra[i] && (c>='A' && c<='Z'))
            if(i < n) return cifra[i+n];
            else return cifra[i-n];
        else if(c == cifra[i])
            if(i < n) 
                if(isalpha(cifra[i+n]))return cifra[i+n]+32;
                else return cifra[i+n];
            else 
                if(isalpha(cifra[i-n]))return cifra[i-n]+32;
                else return cifra[i-n];
    }
    return c;
}

int main(){
    int i, c, n; char cifra[25], texto[1005];
    while(scanf("%d%d%*c", &c, &n) != EOF){
        scanf("%[^\n]%*c", &cifra);
        scanf("%[^\n]%*c", &cifra[c]);
        while(n--){
            scanf("%[^\n]%*c", &texto);
            for(i=0; texto[i]; i++)
                texto[i] = cript(cifra, c, texto[i]);
            cout << texto << endl;
        }
        cout << endl;
    } 
    return 0;
}
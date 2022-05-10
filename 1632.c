#include <stdio.h>
#include <string.h>

int canBeNum(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'S')
        return 1;
    return 0;
}

int senhas(char *s){
	int c=1;
    while(*s){
        if(canBeNum(*s)) c*=3;
        else c *= 2;
        s++;
    }
	return c;
}

int main() {
    char str[20]; int n;
	scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", str);
        printf("%d\n", senhas(str));
    }
  return 0;
}
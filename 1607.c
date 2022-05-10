#include <stdio.h>

int operacoes(char *s, char *r){
	int c = 0, t;
    while(*s){
        t = *r++ - *s++;
        if(t<0) t = 26 + t;
        c += t;
    }
	return c;
}

int main() {
    char str[10005], ref[10005]; int n;
	scanf("%d%*c", &n);
    while(n--){
        scanf("%s", str);
        scanf("%s", ref);
        printf("%d\n", operacoes(str, ref));
    }
  return 0;
}
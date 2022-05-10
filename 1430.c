#include<stdio.h>
#include<string.h>

float valor(char c){
    if(c == 'W') return 1;
    if(c == 'H') return 0.5;
    if(c == 'Q') return 0.25;
    if(c == 'E') return 0.125;
    if(c == 'S') return 0.0625;
    if(c == 'T') return 0.03125;
    if(c == 'X') return 0.015625;
    return 0;
}

int corretos(char *s){
    float c, t;
    for(c=t=0; *s; s++){
        if(*s != '/') t += valor(*s);
        else if (t == 1){c++; t=0;}
        else t = 0;
    }
    return c;
}

int main(){
	char str[250];
	scanf("%[^\n]%*c", str);
    while(strcmp(str, "*")){
        printf("%d\n", corretos(str));
		scanf("%[^\n]%*c", str);
    }
    return 0;
}

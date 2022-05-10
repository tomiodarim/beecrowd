#include <stdio.h>
#include <string.h>

int rajeshWin(int r, int s){
    if(r == 3 && s == 2) return 1;
    if(r == 2 && s == 1) return 1;
    if(r == 1 && s == 4) return 1;
    if(r == 4 && s == 5) return 1;
    if(r == 5 && s == 3) return 1;
    if(r == 3 && s == 4) return 1;
    if(r == 4 && s == 2) return 1;
    if(r == 2 && s == 5) return 1;
    if(r == 5 && s == 1) return 1;
    if(r == 1 && s == 3) return 1;
    return 0;
}

int jogada(char s[]){
    if(!strcmp(s,"pedra"))  return 1;
    if(!strcmp(s,"papel"))  return 2;
    if(!strcmp(s,"tesoura"))  return 3;
    if(!strcmp(s,"lagarto"))  return 4;
    if(!strcmp(s,"spock"))  return 5;
    return 0;
}

int main(){
    int n, raj, shel; char s1[20], s2[20];
    scanf("%d ", &n);
    while(n--){
        scanf("%s ", s1);
        scanf("%[^\n]%*c", s2);
        raj = jogada(s1);
        shel = jogada(s2);
				if(raj == shel){
            printf("empate\n");
            continue;}
        if(rajeshWin(raj, shel)) printf("rajesh\n");
        else printf("sheldon\n");
    }
    return 0;
}
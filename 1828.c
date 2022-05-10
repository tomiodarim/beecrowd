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
    if(!strcmp(s,"Spock"))  return 5;
    return 0;
}

void saida(int shel, int raj, int n){
    if(shel == raj) printf("Caso #%d: De novo!", n);
    else if(rajeshWin(raj, shel)) printf("Caso #%d: Raj trapaceou!", n);
        else printf("Caso #%d: Bazinga!", n); 
    
}

int main(){
    int n, i, raj, shel; char s1[20], s2[20];
    scanf("%d ", &n);
    for(i=0;i<n; i++){
        scanf("%s %s", s1, s2);
        raj = jogada(s2);
        shel = jogada(s1);
		saida(shel, raj, i+1);
    }
    return 0;
}
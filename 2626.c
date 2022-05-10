#include <stdio.h>
#include <string.h>

void analiza(int d, int l, int p){
    if((d==1 && p==3 && l==3) || (d==2 && p==1 && l==1) || (d==3 && p==2 && l==2)) 
        printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
    else if((l==1 && p==3 && d==3) || (l==2 && p==1 && d==1) || (l==3 && p==2 && d==2))
        printf("Iron Maiden's gonna get you, no matter how far!\n");
    else if((p==1 && d==3 && l==3) || (p==2 && d==1 && l==1) || (p==3 && d==2 && l==2))
        printf("Urano perdeu algo muito precioso...\n");
    else printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
}

int converte(char s[]){
    if(!strcmp(s, "pedra")) return 1;
    if(!strcmp(s, "papel")) return 2;
    if(!strcmp(s, "tesoura")) return 3;
}

int main(){
    char s1[10], s2[10], s3[10]; int d, l, p;

    while(scanf("%s%s%s", s1, s2, s3) != EOF){
        d = converte(s1);
        l = converte(s2);
        p = converte(s3);
        analiza(d, l, p);
    }

    return 0;
}
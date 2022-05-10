#include <iostream>

using namespace std;

int main(){
    int i, n, a, t[6]; char s[25];
    t[0] = t[1] = t[2] = t[3] = t[4] = t[5] = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%s", &s);
        for(i=0; i<6; i++){
            scanf("%d", &a);
            t[i] += a;
        }
    }
    printf("Pontos de Saque: %.2f %%.\n", t[3]*1.0/t[0]*100.0);
    printf("Pontos de Bloqueio: %.2f %%.\n", t[4]*1.0/t[1]*100.0);
    printf("Pontos de Ataque: %.2f %%.\n", t[5]*1.0/t[2]*100.0);

    return 0;
}
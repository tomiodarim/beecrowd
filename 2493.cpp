#include <iostream>
#include <string.h>
using namespace std; 

void ordena(char* nomes[], int t){
    int i, j; char *aux;
    for(i=0; i<t-1; i++)
        for(j=i+1; j<t; j++)
            if(strcmp(nomes[i], nomes[j]) > 0){
                aux = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = aux;
            }
}

int main(){
    int i, n, x[50], y[50], z[50], e[50], errou[50], t; char no[50][51], r[50]; char* nomes[50];
    while(scanf("%d", &n) != EOF){
        for (i = 0; i < n; i++)
            scanf("%d %d=%d", &x[i], &y[i], &z[i]);
        for (i = 0; i < n; i++)
            scanf("%s %d %c", &no[i], &e[i], &r[i]);

        for (t=i = 0; i < n; i++) {
            if(r[i] == '+'){
                if (x[e[i] - 1] + y[e[i] - 1] != z[e[i] - 1]){
                    errou[t] = i;
                    t++;
                }
            }
            else if (r[i] == '-'){
                if (x[e[i] - 1] - y[e[i] - 1] != z[e[i] - 1]){
                    errou[t] = i;
                    t++;
                }
            }
            else if (r[i] == '*'){
                if (x[e[i] - 1] * y[e[i] - 1] != z[e[i] - 1]){
                    errou[t] = i;
                    t++;
                }
            }
            else if (r[i] == 'I'){
                if (x[e[i] - 1] + y[e[i] - 1] == z[e[i] - 1] || 
                    x[e[i] - 1] - y[e[i] - 1] == z[e[i] - 1] ||
                    x[e[i] - 1] * y[e[i] - 1] == z[e[i] - 1]){
                    errou[t] = i;
                    t++;
                }
            }
                //cout << t;
        }
        if(t == 0) cout << "You Shall All Pass!\n";
        else if(t == n) cout << "None Shall Pass!\n";
        else{
            for(i=0; i<t; i++)
                nomes[i] = no[errou[i]];
            ordena(nomes, t);
            for(i=0; i<t-1; i++)
                cout << nomes[i] << " ";
            cout << nomes[i] << endl;
        }
    }
    return 0;
}

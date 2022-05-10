#include <stdio.h>

void printvet (int v[], int n) {
  int i;
  for (i=0; i<n; i++)
    printf("%d\n", v[i]);
}

void remover(int v[], int j, int *n) {
    int i;
    for(i=j; i<*n-1; i++)
        v[i] = v[i+1];
    *n = *n - 1;
}

void removeRepetidos (int v[], int *n) {
    int i, j;
    for(i=1; i<*n; i++){
        for(j=0; j<i; j++){
            if(v[i]==v[j]){
                remover(v, i, n);
                i--; j--;
            }
        }
    }
}

void lervet (int v[], int *px) {
  int i;
  scanf ("%d", px);
  for (i=0; i<*px; i++)
    scanf ("%d", &v[i]);
}

int main() {
    int v[100], n;
    lervet (v,  &n);
    removeRepetidos(v, &n);
    printvet(v, n);

  return 0;

}
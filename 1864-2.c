#include <stdio.h>

void print(char c[], int n){
	int i;
	for(i=0; i<n; i++)
		printf("%c", c[i]);
	printf("\n");
}

int main() {
  char frase[35] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
	int n;
	scanf("%d", &n);
	print(frase, n);
  return 0;
}
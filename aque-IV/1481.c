#include <stdio.h>
#include <string.h>

void removeResto(char s[], int t){
    int i;
    for(i=0; s[i]; i++)
        s[i] = s[i+t];
}

void addstr(char *s, char *tok){
    int ts = strlen(s), ttok = strlen(tok);
    char *p = s;
    for(s += ts; s > p; s--)
        *(s+ttok-1) = *s;
    for(; p < s+ttok;)
        *p++ = *tok++;
}

void trocador(char *ref, char *s, char *tok) {
    char *p; int tr = strlen(ref), tt = strlen(tok);
    p = strstr(s, ref);
    while(p){
        addstr(p, tok);
        removeResto(p+tt-1, tr-1);
        p = strstr(s, ref);
    }
}

int main () {
  int n; char str[1001], ref[100], tok[100];
  scanf ("%d%*c", &n);
  scanf ("%s %[^\n]%*c", ref, tok);
  while (n--) {
    scanf ("%[^\n]%*c", str);
    trocador(ref, str, tok);
    printf("[%s]\n", str);
  }
  return 0;
}

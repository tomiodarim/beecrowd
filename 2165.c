#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%[^\n]", str);
    if(strlen(str) <= 140) printf("TWEET\n");
    else printf("MUTE\n");

    return 0;
}

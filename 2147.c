#include <stdio.h>
#include <string.h>

int main(){
    char str[10005]; int n; float t;
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", str);
        t = strlen(str);
        printf("%.2f\n", t/100);
    }

    return 0;
}

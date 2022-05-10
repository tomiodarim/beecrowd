#include<stdio.h>
#include<string.h>

int main(){
	int l, i, j, m, t, q; char s[50][51];
    scanf("%d%*c", &l);
    while(l != 0){
		for(i=0; i<l; i++)
            scanf("%[^\n]%*c", s[i]);
		m = strlen(s[0]);
        for(i=1; i<l; i++){
            t = strlen(s[i]);
            if(t > m) m = t;
        }
        for(i=0; i<l; i++){
            t = strlen(s[i]);
            if(t != m){
                q = m-t;
                for(; t+1; t--)
                    s[i][t+q] =  s[i][t];
                for(; t<q; t++)
                    s[i][t] =  ' ';
            }
        }
        for(i=0; i<l; i++)
            printf("%s\n", s[i]);
        scanf("%d%*c", &l);
        if(l!=0) printf("\n");
    }
	return 0;
}

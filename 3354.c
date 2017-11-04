#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n,i,j,a[100],t,p;
    scanf("%d",&t);
    getchar();
    for(j=0;j<t;j++){
        scanf("%s",s);
        int x=strlen(s);n=0;p=0;
        for(i=0;i<x;i++){
            if(s[i]=='O'){
                n=n+1;
                a[i]=n;
            }
            else if(s[i]=='X'){
                a[i]=0;
                n=0;
            }
            else {
                 a[i]=0;
                n=0;
            }
        }
        for(i=0;i<x;i++){
            p=p+a[i];
        }
        printf("%d\n",p);
    }
return 0;
}

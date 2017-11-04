#include<stdio.h>
#include<string.h>
int main(){
    int x,n,i,j,k,a,b,c,t;
   while( scanf("%d",&n)!=EOF && n!=0){
    char ch[111];
    scanf("%s",&ch);
    x= strlen(ch);
    b=0;
    k=(x)/n;
    t=x/k;
    c=k;
        for(i=0;i<t;i++){
            a=c+b;
            b=a;
            for(j=a-1;j>=a-c;j--){
                printf("%c",ch[j]);
            }
        } printf("\n");
   }
    return 0;
}

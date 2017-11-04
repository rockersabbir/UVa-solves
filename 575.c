#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char ch[100];
   while( scanf("%s",&ch)!=EOF ){
    int l=strlen(ch);
    int i,total=0,count=0,n,a,k,b;
    n=l;
    for(i=0;i<l;i++){
        a=pow(2,n);
        k=(a-1);
        b=ch[i]-'0';
        total= ( b * k  ) + total;
        n--;
    }
    if(l==1 && total==0) break;
    printf("%d\n",total);
   }
return 0;
}

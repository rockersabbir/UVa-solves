#include<stdio.h>
#include<string.h>
int main(){
    int n;char ch[1000000];
    long long int a,b,x,i;
    while (scanf("%d",&n)!=EOF ){
    a=0;b=1;
    printf("serise is :");
    for(i=0;i<=n-1;i++){
        x=a+b;
        b=a;
        a=x;

    }printf("%lld\n",x);
    }
return 0;
}

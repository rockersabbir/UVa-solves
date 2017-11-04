#include<stdio.h>
#include<math.h>
long long  factriol(int a)
{   int i;
    long long fact=1;
    for(i=1;i<=a;i++){
    fact=fact*i;
    }
    return fact;
}
long long mult(long long x,long long y){
    int j;long long k=0;
    for(j=x+1;j<=y;j=j+2){
         k= ( j*(j+1) )+k;
    }
    printf(" %lli ",k);
    return k;
}
int main(){
    long long  c=0;
    int n,m;
    while( scanf("%lli%lli",&n,&m)!=EOF ){
      c=  mult(n,m)/ ( factriol(m) );
      printf("%lli\n",c);
    }
    return 0;
}


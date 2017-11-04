#include<stdio.h>
int main(){
    int n,k,f,total,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
   while( scanf("%d %d %d",&n,&f,&k)!=EOF ){

        total=0;

        n=n+f;

        while(n>=k){
            total=total+n/k;
            n=(n/k) + (n%k);
        }
        printf("%d\n",total);
   }
   }

return 0;
}

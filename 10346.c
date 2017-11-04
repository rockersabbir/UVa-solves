#include<stdio.h>
int main(){
    int n,k,total;
   while( scanf("%d %d",&n,&k)!=EOF && k>1 ){

        total=n;;

        while(n>=k){
            total=total+n/k;
            n=(n/k) + (n%k);
        }
        printf("%d\n",total);
   }
return 0;
}

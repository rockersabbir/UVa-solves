#include<stdio.h>

int main(){
    int n,k,total;
   while( scanf("%d",&n)!=EOF ){

        total=n;k=3;
    if(n%2==0){
        total+=1;
    }
        while(n>=k){
            total=total+n/k;
            n=(n/k) + (n%k);
        }
        printf("%d\n",total);
   }
return 0;
}


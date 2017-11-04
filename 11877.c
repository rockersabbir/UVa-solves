#include<stdio.h>
int main(){
    int n,k,total;
   while( scanf("%d",&n)!=EOF && n!=0 ){

        total=n;k=3;
    if(n%2==0){
        n+=1;
    }total=0;
        while(n>=k){
            total=total+n/k;
            n=(n/k) + (n%k);
        }
        printf("%d\n",total);
   }
return 0;
}


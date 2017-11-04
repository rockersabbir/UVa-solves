#include<bits/stdc++.h>
using namespace std;
int main(){
    long int c=0,n,i,k;
   while( scanf("%ld",&n)!=EOF&& n!=0) {
        c=0;
        k=1;i=3;
    while(k<n){
        k=k+i;
        i=i+2;
   if(n==k){
            printf("yes\n");
            break;
    }
   } if(n==1) printf("yes\n");
  else if(n!=k) printf("no\n");
   }
return 0;
}

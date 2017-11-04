#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,k,l,n,cont,c;
    scanf("%d",&t);
    for(l=0;l<t;l++){
        scanf("%d",&n);
        k=0;cont=0; i=1;
        while(i<=n*2){
                c=0;
            for(j=1;j<=i;j++){
                k++;
                c++;
         if(k==n){
            cont=1;
            break;
         }
            }
              if(cont==1){ break; }
        i++;
        }
        if(c!=i) { i--; }
    printf("%d\n",i);    }
return 0;
}

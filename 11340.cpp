#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

 long int n[100],x,a,i,j,k,b; double p;
    char tx[10000],cost[100];
    scanf("%d",&x);
    while(x--){
        scanf("%ld\n",&a);
        for ( i=0;i<a;i++){
            scanf("%c%ld\n",&cost[i],&n[i]);
        } p=0;
        scanf("%ld\n",&b);
        for(i=0;i<b;i++){

        gets(tx);
        int l=strlen(tx);
        for( j=0;j<a;j++){
            for( k=0;k<l;k++){
                if(tx[k]==cost[j]) p+=n[j];
            }
        }

        }
        printf("%.2lf$\n",p/100);

    }






return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,i,j,k,l,q,mx=0,sum=0,cunt=1;
    while(  scanf("%d %d %d",&n,&m,&c)!=EOF ){
            if(n==0 &&m==0 && c==0 ) break;
        int a[n+1],b[m+1]={0},x[m+1]={0};  sum=0;
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(j=1;j<=m;j++){
            scanf("%d",&k);
            if(b[k]==0  ){
                sum=sum+a[k];
                b[k]=1;
            }

            else if(b[k]==1){
                sum=sum-a[k];
                b[k]=0;
            }
            x[j]=sum;
        }  q=-1000; mx=0;
        for(l=1;l<=m;l++){
            if(x[l]>q){
                mx=x[l];
                q=mx;
            }
        }

        if(c<mx){
            printf("Sequence %d\nFuse was blown.\n\n",cunt);
        }
        else if(c>=mx){
printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",cunt,mx);
        }
cunt++;
    }
    return 0;
}

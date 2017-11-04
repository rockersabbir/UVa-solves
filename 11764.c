#include<stdio.h>
int main(){
int t,n,i,j,l,k,c=0;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n);
    int w[n],low=0,high=0;
        for(l=0;l<n;l++)
            {
                scanf("%d",&w[l]);
            }
        for(j=0;j<n-1;j++)
        {
            if(w[j]<w[j+1]){
                high++;
            }

            else if(w[j]>w[j+1])
                {
                    low++;
                }
        }

    printf("Case %d: %d %d\n",c+1,high,low);
    c++;

}



return 0;
}

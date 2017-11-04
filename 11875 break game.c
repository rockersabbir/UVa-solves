#include<stdio.h>
int main(){
int i,j,l,m,n,arr[11];
scanf("%d",&l);
for(j=0;j<l;j++){
        scanf("%d",&n);
            for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        }


        m=(n/2)+1;
        printf("Case %d: %d\n",j+1,arr[m] );



}
return 0;
}

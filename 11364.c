#include<stdio.h>
int main(){
    int i,j,k,n,a,l,re;
    scanf("%d",&a);
    for(l=0;l<a;l++){
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    } j=ar[0];
    for(i=0;i<n;i++){
        if(j<ar[i]) j=ar[i];
    }k=ar[0];
    for(i=0;i<n;i++){
        if(k>ar[i]) k=ar[i];
    }
    re=(j-k)*2;
    printf("%d\n",re);
    }
    return 0;
}

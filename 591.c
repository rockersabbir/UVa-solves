#include<stdio.h>
int main(){
    int n,i,k,k1,t,c=1,avs,h[200];
    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=0;i<n;i++){
            scanf("%d",&h[i]);
        }t=0;k1=0;
        for(i=0;i<n;i++){
            t=t+h[i];
        }
        avs=t/n;
       for(i=0;i<n;i++){
            if(avs<h[i]){
                k=h[i]-avs;
                k1=k1+k;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c,k1);
        c++;k1=0;
    }
    return 0;
}

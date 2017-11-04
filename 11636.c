#include<stdio.h>
int main(){
    int i,a,b,n,cunt=1;
    while(scanf("%d",&n)!=EOF &&n>=0){
            a=1,b=0;
        for(i=0;i<10001;i++){
            if(n==0 || n==1){
                break;
            }
            b=a*2;
            a=b;
            if(b>=n){
                i++;
                break;
            }
        }
        printf("Case %d: %d\n",cunt,i);
        cunt++;
    }

return 0;
}

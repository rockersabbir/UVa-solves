#include<stdio.h>
int main(){
    int i,j,N,K,P,c,cunt=0;
    scanf("%d",&c);
     for(j=0;j<c;j++) {
         scanf("%d%d%d",&N,&K,&P);
    for(i=0;i<P;i++){

        if(K==N){
            K=0;
        }
   K++;
    }
    cunt++;
    printf("Case %d: %d\n",cunt,K);
  }
return 0;
}

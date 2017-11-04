#include<stdio.h>
#include<math.h>
int main(){

    long long int n,x,y,c,i,j,l,k,t;
   while (scanf("%lld  %lld",&x,&y)!=EOF && x!=0 &&y!=0 ){
        n=y-x; j=1;
       t =200005;
  long long int ar[t];
       for(i=x;i<=y;i++){
        c=0;k=i;
    while(k!=0){
            c++;
        if(k%2==0){
        k=k/2;
        if(k==1) break;
        }
        else if(k%2!=0) {
        k=(3*k)+1;
        if(k==1) break;
        }
    }

    ar[j]=c;
    j++;

   }
   l=-1;
   for(j=1;j<=n;j++){
    if(l<ar[j]) l=ar[j];
   }
   for(j=1;j<=n;j++){
    if( ar[j]==l ) {
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",x,y,j+x-1,ar[j]); break;
    }
   }
   }
return 0;
}

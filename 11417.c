#include<stdlib.h>
int main(){
    int N,i,j,k;
    long long int G;
    for(k=0;k<110;k++) {
         scanf("%d",&N);
         if(N==0){
            return 0;
         }
G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}
printf("%d\n",G);
    }
return 0;
}
int GCD(int a,int b){

if(b==0)return a;
return GCD(b,a%b);

}

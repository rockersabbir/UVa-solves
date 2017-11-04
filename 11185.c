#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,ar[100];
     long long int r;
    while (scanf("%d",&n)!=EOF && n>=0 ){
    i=0;
    if(n==0){
        ar[0]=0;
        i++;
    }
    while(n>0){
        r=n%3;
        ar[i]=r;
        n=n/3;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",ar[j]);
    }
    printf("\n");
        }
return 0;
}

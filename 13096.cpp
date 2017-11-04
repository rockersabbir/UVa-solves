#include<bits/stdc++.h>
 using namespace std;
 int main(){
  long  int i ,j,k,l=0;
    scanf("%d",&k);
    for(i=1;i<=k;i+=2){

        j=pow(i,2);
        j=j+l;
        l=j;
    }float p=j/(k-1);
    p=p*2;


        printf("%f ",sqrt(p) );

 return 0;
 }

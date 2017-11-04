#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int x,y,n,c,d=0,l,e,t;
   scanf("%d",&t);
   while(t--){
    scanf("%d",&x); y=x;  c=0;
    while(x!=0){
        n=x%2;
        x/=2;
        if(n==1){  c++; }
    }d=0;
    while(y!=0){
       e= y%10;
       y/=10;
       if(e==0 ) d=d+0;
        if(e==1 ) d=d+1;
        if(e==2 ) d=d+1;
        if(e==3  ) d=d+2;
        if(e==4  ) d=d+1;
        if(e==5  ) d=d+2;
        if(e==6  ) d=d+2;
        if(e==7  ) d=d+3;
        if(e==8  ) d=d+1;
        if(e==9  ) d=d+2;
    }
    printf("%d %d",c,d);
     printf("\n");
   }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){

     char ar[5000];
     while(cin>>ar){ int c=0,q=0;
     int x4=0,x55=0,x15=0,x100=0,x400=0, l=strlen(ar);
     for(int i=0;i<l;i++){
        x4=((ar[i] -'0') +x4*10)%4;
        x55=((ar[i] -'0') +x55*10)%55;
        x100=((ar[i] -'0') +x100*10)%100;
        x400=((ar[i] -'0') +x400*10)%400;
        x15=((ar[i] -'0') +x15*10)%15;

     }
     if(x400==0 ||(x4==0&&x100!=0)){
            printf("This is leap year.\n");
            c=1;
            q=1;
     }

      if(x15==0)  {
    printf("This is huluculu festival year.\n");
      c=1;
      }

    if(x55==0&& q==1) printf("This is bulukulu festival year.\n");

     if(c==0) printf("This is an ordinary year.\n");

        printf("\n");
     }
return 0;
}


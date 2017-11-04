#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,n,sum=0,p, ans; char a[3];
    scanf("%lf",&x);

  for(int j=0;j<x;j++){ sum=0.00;
        getchar();
    p=2.0;

        for(int i=0;i<3;i++)
    {scanf("%c",&a[i]);

        if(a[i]=='A') {n=0; sum=sum+( n*  pow(26,p)  );  }
        else if(a[i]=='B') {n=1; sum=sum+( n*  pow(26,p) ); }
        else if(a[i]=='C') {n=2; sum=sum+( n*  pow(26,p)  ); }
        else if(a[i]=='D') {n=3; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='E') {n=4; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='F') {n=5; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='G') {n=6; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='H') {n=7; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='I') {n=8; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='J') {n=9; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='K') {n=10; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='L') {n=11; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='M') {n=12; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='N') {n=13; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='O') {n=14; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='P') {n=15; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='Q') {n=16; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='R') {n=17; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='S') {n=18; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='T') {n=19; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='U') {n=20; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='V') {n=21; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='W') {n=22; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='X') {n=23; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='Y') {n=24; sum=sum+( n* ( pow(26,p) ) ); }
        else if(a[i]=='Z') {n=25; sum=sum+( n* ( pow(26,p) ) ); }

         p--;
    }
    scanf("-%lf",&n);

    if(sum>n) ans=  (sum-n);
    else  ans=  (n-sum);

if(ans<=100) printf("nice\n");
else printf("not nice\n");

   }

return 0;
}

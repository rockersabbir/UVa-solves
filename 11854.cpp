#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long a,c,b,d,e,f;
     while( scanf("%ld%ld%ld",&a,&b,&c)!=EOF   )
     {
         d=a*a;
         e=b*b;
         f=c*c;
         if(a==0&&b==0&&c==0) break;
        else if( (d+e)==f || (e+f)==d || (d+f)==e ) printf("right\n");
         else printf("wrong\n");
     }
    return 0;
 }

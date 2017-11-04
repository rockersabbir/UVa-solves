#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,a1,b1,x,c,d,c1,d1,q=1;
    scanf("%d",&x);
    while(x--){

        scanf("%d:%d %d:%d",&a,&b,&a1,&b1);
        a=a*60+b; a1=a1*60+b1;
        scanf("%d:%d %d:%d",&c,&d,&c1,&d1);
        c=c*60+d; c1=c1*60+d1;

        if(c>a1 || a>c1) printf("Case %d: Hits Meeting\n",q);
        else printf("Case %d: Mrs Meeting\n",q);

        q++;


    }





 return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int t,a,b,c,i,cunt=0;
    scanf("%ld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&c);
        cunt++;
        if( a+b>c && b+c>a && c+a>b ){

              if( a<=0 || b<=0 || c<=0 ) printf("Case %lld: Invalid\n",cunt);

          else  if( a==b && b==c && c==a  ){
                printf("Case %lld: Equilateral\n",cunt);
            }
            else if( a!=b && b!=c && c!=a ){
                printf("Case %lld: Scalene\n",cunt);
            }
            else printf("Case %lld: Isosceles\n",cunt);

        }
        else printf("Case %lld: Invalid\n",cunt);
    }
return 0;
}

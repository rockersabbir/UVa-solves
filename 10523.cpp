#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int total,n,a,i;
    while( scanf("%lld %lld",&n,&a)!=EOF ){
        total=0;
        for(i=1;i<=n;i++){
            total=( i*pow(a,i) ) +total;
        }
        printf("%lld\n",total);
    }
return 0;
}

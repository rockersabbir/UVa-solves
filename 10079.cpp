#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i, n, total;
    while( scanf("%lld",&n)!=EOF && n>=0 ){
            total=1;
            for(i=1;i<=n;i++){
                total=total + i;
            }
    printf("%lld\n",total);
    }
return 0;
}

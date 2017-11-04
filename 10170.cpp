#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int s ,n,total;
    while( scanf("%lld %lld",&s,&n)!=EOF ){
        total=0;
        while(total<n){
            total=total+s;
            s++;
        }
        printf("%lld\n",s-1);
    }
return 0;
}

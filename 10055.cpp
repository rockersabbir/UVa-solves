#include<bits/stdc++.h>
using namespace std;
int main(){

    long long a,b,c;
    while( scanf("%lld%lld",&a,&b)!=EOF ){
        if(a<b) c=b-a;
        else if(a>b) c=a-b;
        else c=a-b;
        cout<<c<<endl;
    }




 return 0;
}

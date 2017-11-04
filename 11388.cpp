#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin>>c;
    while(c--){
    cin>>a>>b;

    if( b%a==0 ) cout<<a<<" "<<b<<endl;

    else cout<<"-1"<<endl;

    }
return 0;
}

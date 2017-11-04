#include<bits/stdc++.h>
using namespace std;
int main(){

    long a,b;
    cin>>b;
    while(b--){
    long long dis=0;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++) scanf("%d",&ar[i]);

    sort(ar,ar+a);

    for(int j=a-3;j>=0;j=j-3) dis+=ar[j];


    cout<<dis<<endl;
    }

return 0;
}

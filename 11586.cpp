#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char a[500];
    int t,c,d;
    scanf("%d",&t);
    getchar();
    while( t-- ){
        c=0;d=0;
        gets(a);
        int l=strlen(a);
    for(int i=0;i<l;i++){
        if(a[i]=='M') c++;
        else if(a[i]=='F') d++;
    }
    if(c==d&&l>2) cout<<"LOOP"<<endl;
    else cout<<"NO LOOP"<<endl;
    }
return 0;
}

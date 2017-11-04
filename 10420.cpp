#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int x,k=true,j;
    cin>>x;
    while(x--){
    char a[100]={'0'},b[100]={'0'};
            cin>>a; j=0;
            int l=strlen(a);
            for(int i=0;i<l;i++){
                    if(a[i]!=' '){
                        b[j]=a[i];
                        j++;
                    }
                    else if(j!=0){
                        break;
                    }
            }
            int l2=strlen(b);
            for(int z=0;z<l2;z++){
                cout<<b[z];
            }
    }


return 0;
}

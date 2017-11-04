#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d=false,e=false,x,y;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }
    cin>>y;
    while(y--){
        cin>>a;
        e=false;d=false;
        for(int j=0;j<x;j++){
               if(ar[j]>a)
               {
                b=ar[j];
                d=true;
                break;
               }

        }
        for(int j=0;j<x;j++){
               if(ar[j]<a)
               {
                c=ar[j];
                e=true;
               }

    }
    if(e== true) printf("%d ",c);
        else printf("X ");
        if(d==true) printf("%d\n",b);
        else printf("X\n");
    }


return 0;
}

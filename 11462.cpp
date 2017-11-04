#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
     int x;
    int i;
    while(scanf("%d",&x)!=EOF && x!=0 ){
            int a[x];
        for(    i=0;i<x;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+x);
        for(i=0;i<x;i++){
                if(i==x-1) printf("%d\n",a[i]);

            else printf("%d ",a[i]);
        }
    }
 return 0;
}

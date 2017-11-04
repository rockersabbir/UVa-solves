#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],b,i,c;
    while( scanf("%d",&b)!=EOF ){
            c=0;
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++){
           if(a[i]==b) c++;
        }
    printf("%d\n",c);
    }
return 0;
}

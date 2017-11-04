#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a + b > c && a + c >b && b + c > a){
            printf("OK\n");
        }
        else printf("Wrong!!\n");
    }
    return 0;
}

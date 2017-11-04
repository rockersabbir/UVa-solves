#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    char a[5000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        int l=strlen(a);
        if(l==1){
        if(a[0]=='1'  ) printf("+\n");
        else if(a[0]=='4'  ) printf("+\n");
        }

        else if(a[0]=='7' && a[1]=='8' &&l==2 ) printf("+\n");
        else if( a[l-1]=='5' && a[l-2]=='3' ) printf("-\n");
        else if( a[0]=='9' && a[l-1]=='4' ) printf("*\n");
        else printf("?\n");
    }

    return 0;
}

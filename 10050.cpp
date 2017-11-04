#include<bits/stdc++.h>
using namespace std;
int main(){
int x,days,n,i,  m,c=0,t;
scanf("%d",&t);
while(t--){
scanf("%d",&days);
scanf("%d",&x);
getchar();
int a[days]={0};
    while(x--){

        scanf("%d",&n);
        int j=1;
        for(i=n;i<=days;i=i+n){
            a[i]=1;
        }
        m=7;c=0;
        for(i=0;i<=days;i++){

         if(i==m ||i==m-1  ){
                        if(i==m){
                           m=m+7;
                        }
                }
                else if(a[i]==1){
                    c++;
                }
        }

    }printf("%d\n",c);


}

return 0;
}


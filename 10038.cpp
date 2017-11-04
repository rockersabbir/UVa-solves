#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0;

  while(  scanf("%d",&n)!=EOF ) {
  int a[5000],in[5000]={0},  c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if( a[i]<a[i+1] ){
            t=a[i+1]-a[i];
        }
        else {
            t=a[i]-a[i+1];
        }
         in[t-1] = 1;
    }
    bool yes = true;
    for (int i = 0; i < n-1; i++){
        if (in[i] != 1){
            yes = false;
            break;
        }
    }
if(n==1) cout <<"Jolly"<< endl;
else if(n==2 && t==1) cout <<"Jolly"<< endl;
 else if (yes)
        cout <<"Jolly"<< endl;
    else
        cout <<"Not jolly" << endl;

  }

return 0;
}

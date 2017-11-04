#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m;
    while( scanf("%d:%d",&h,&m)!=EOF  ){
            if(h==0 && m==0) break;
            float ans,x;
            ans=(h*30.000)-(m*5.500);
          if(ans<0) ans=ans*-1.000;
            x=360.000-ans;
            if(x<ans) printf("%.3f\n",x);
            else printf("%.3f\n",ans);
    }
return 0;
}

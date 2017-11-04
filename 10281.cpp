#include<bits/stdc++.h>
using namespace std;
int main(){

   char buffer[100];
   int h,m,t=0,s,spd,nspd=0,nw=0,n;
   double d=0;
   while( cin.getline(buffer,sizeof(buffer)) ){
    n=sscanf(buffer,"%d:%d:%d %d",&h,&m,&s,&spd);
    nw=(h*3600)+(m*60)+s;
    d+=(nw-t)*nspd;
    t=nw;
    if(n==3){
        printf("%02d:%02d:%02d %.2lf km\n",h,m,s,d/3600);
    }
    else nspd=spd;
   }
return 0;
}

#include<bits/stdc++.h>

using namespace std;
bool prime( int i ) {
int sqrtI = int( sqrt( (double) i) );

for( int j = 2; j <= sqrtI; j++ ) {
if( i % j == 0 )
return false;
}

return true;
}
int rev(int c){
    int x,y,z;
     while( z!=0 ){
    x=(c%10)+y;
    z=c/10;
   c=c/10;
   y=x*10;
   }
    return x;
}
int main(){
    int x;
    while(scanf("%d",&x)!=EOF ){
            int l= rev(x);
        if(  l==x  && prime(l)==true ) {
            x=2*x;
            printf("%d",x);
             break;
    }
    else
        {
            x=2*x;
            printf("%d\n",x);
            }
    }
return 0;
}

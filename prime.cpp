#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool prime(  long long int i ) {
 long long int sqrtI = int( sqrt( (double) i) );
for( int j = 2; j <= sqrtI; j++ ) {
if( i % j == 0 )
return false;
}
return true;
}
int rev(unsigned long long int c){
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
 unsigned long long int i,n;
   while( scanf("%llu",&n)!=EOF ){
      int l= rev(n);
        if(n==0) {printf("%llu is not prime.",n);}
  else if(prime(n)==false)  {printf("%llu is not prime.",n);}
else if(prime(n)!=false){
   if( prime(l)==true && l!=n) {
        printf("%llu is emirp.",n);
    }
   else    {
        printf("%llu is prime.",n);
    }
   }
   printf("\n");
   }

    return 0;
}

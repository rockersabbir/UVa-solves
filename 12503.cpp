#include<bits/stdc++.h>
using namespace std;
int main() {

char a[5000],ar[5000]; int p,c,t,f,L;
scanf("%d",&f);
while(f--){
scanf("%d",&t);
c=0;p=0;L=0;
getchar();
while(t--){
      gets(a) ;
    int l= strlen(a);
    while(1){
        if(a[0]=='L'){
                p=p-1;
                c++;
                ar[c]='-';
                break;
                }
       else if( a[0]=='R'){
                p=p+1;
                c++;
                ar[c]='+';
                 break;
       }
        else if( a[0]=='S'){
                if( l==9 ){
               l = a[8] - '0';

            if ( ar[l]=='+' ) {
                p=p+1;
                c++;
                ar[c]='+';
              break; }
            else if(ar[l] =='-') {
                p=p-1;
                c++;
                ar[c]='-' ;
             break;
            }
                }
            else  {
                l= 10 *( a[8]- '0' );
                l=l+ ( a[9] - '0' );
            if ( ar[l]=='+' ) {
                p=p+1;
                c++;
                ar[c]='+';
              break; }
            else if(ar[l] =='-') {
                p=p-1;
                c++;
                ar[c]='-' ;
             break;
            }

            }
    }
}
}       printf("%d\n",p);
}
return 0;
}


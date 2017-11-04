#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){

    long long int x,a,n; int c=1;
    cin>>a;
    while(a--){

    double y; x=0;y=0.0;
    cin>>x;
    if(x<=180000){
            printf("Case %d: 0\n",c);
        }
    x-=180000;
    if(x>=300000){
        y=300000*.1;
        x-=300000;
        if(x>0 && x<400000){
            y=y+ (x*.15);
        }
        else if(x>0 && x>=400000 ){
            y=y+ (400000*.15);
            x-=400000;
            if(x>0&& x<300000){
                y=y+(x*.20);
            }
            else if(x>0 && x>=300000){
                    y=y+ (300000*.20);
                    x-=300000;
                    if(x>0){
                        y=y+(x*.25);
                    }
            }

        }
        n=ceil(y);
    printf("Case %d: %.d\n",c,n);
    }
    else if(x>0 && x<300000 ){
        y=y+ (x*.10);
        if(y<2000){
                n=ceil(y);
            printf("Case %d: 2000\n",c);
        }
        else {
        n=ceil(y);
         printf("Case %d: %.d\n",c,n);
        }
    }
    c++;}
 return 0;

}

#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
    double r,t,t1,t2;
    int cunt=1,x;
    scanf("%d",&x);
    while(x--){
        scanf("%lf %lf",&r,&t);
        t1=1/(r-1);
        t1=t*t1;
        t2=t+t1;
        printf("Case %d: %.3lf %.3lf",cunt,t1,t2);
        if(x!=0) printf("\n");
        cunt++;
    }
return 0;
}

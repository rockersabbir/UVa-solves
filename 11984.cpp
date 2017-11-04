#include<bits/stdc++.h>
using namespace std;
int main(){
    float f ,c;
    int i,cunt=1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%f %f",&c,&f);
        f=(f*5)/9;
        f=f+c;
        printf("Case %d: %.2f\n",cunt,f);
        cunt++;
    }

return 0;
}

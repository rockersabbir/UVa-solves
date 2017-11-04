#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main(){
   double i,t, n,h,l,ra,s,f;
    scanf("%lf",&t);

    for(i=0;i<t;i++)
    {n=0;
        scanf("%lf",&l);
        n=l/5;
        s=pi*n*n;
        h=l*6/10;
        ra= (h*l);
        f=ra-s;
        printf("%0.2lf %0.2lf\n",s,f);
    }
return 0;
}

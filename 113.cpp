#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double p,n,k;
    while(scanf("%lf%lf",&n,&p)!=EOF)
    {
       k= pow(p,1/n);
       printf("%.0lf\n",k);
    }
    return 0;
}

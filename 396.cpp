#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define rev(s) std::reverse(s.begin(), s.end())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define INF (1<<28)
#define mod 1000000007
#define tbeg clock_t _t=clock();
#define tend cout << "\n\nTime: " << (double)(clock()-_t)/CLOCKS_PER_SEC;
#define PI 2*acos(0.0)
#define low std::transform(s.begin(), s.end(), s.begin(), ::tolower);
#define n2s(n) stringstream ss; ss<<n; string s=ss.str()
#define CC(x) cout<<(x)<<endl
#define srt sort(a,a+n)
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
long long int calculation( long long int a, long long int b)
{
    long long fr = 1;
    if(a - b<b)
    {
        b = a - b;
    }
    for( int i =1; i<=b; i++, a--)
    {
        fr = fr * a;
        fr = fr / i;
    }
    return fr;
}
int main()
{
    long long int a, b, result;
    while(scanf("%lld%lld",&a,&b)!=EOF&&a!=0&&b!=0)
    {
        result = calculation(a,b);
        printf("%lld things taken %lld at a time is %lld exactly.\n",a,b,result);
    }
    return 0;
}


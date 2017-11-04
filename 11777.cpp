#include<bits/stdc++.h>
using namespace std;
int main(){
    int t1,t2,f,a,c1,c2,c3,total,ct,x,p,c=1;
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
         total=t1+t2+f+a;
        if(c1<=c2&&c1<=c3)
        {
            x=(c2+c3)/2;
        }
        else if(c3<=c2&&c3<=c1)
        {
            x=(c1+c2)/2;
        }
        else
        {
            x=(c1+c3)/2;
        }

        total=x+total;
        if(total>=90) printf("Case %d: A\n",c);
        else if(total>=80 && total<=89) printf("Case %d: B\n",c);
        else if(total>=70 && total<=79) printf("Case %d: C\n",c);
        else if(total>=60 && total<=69) printf("Case %d: D\n",c);
        else if(total<60 ) printf("Case %d: F\n",c);
        c++;
    }
return 0;
}

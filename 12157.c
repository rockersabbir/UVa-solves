#include<stdio.h>
	int main ()
	{
        int a,b,n,r,i,j,k,l,c[50],d[50],e,f,g,h,z,q;
        scanf("%d",&z);
        for(q=1;q<=z;q++){
        scanf("%d",&k);l=k;e=0;f=0;h=0;
        for(i=0;i<k;i++)
        {e++;
        scanf("%d",&n);
        r=n;a=0;b=0;
        while(n>=0){
           n=n-30;
           a++;
        }
        a=a*10;
        c[e]=a;

        while(r>=0){
           r=r-60;
           b++;
        }b=b*15;
         d[e]=b;
        }for(j=1;j<=l;j++){
            f=c[j]+f;
        }
        for(g=1;g<=l;g++){
            h=d[g]+h;
        }
        if(f<h) printf("Case %d: Mile %d\n",q,f);
        else if(f>h) printf("Case %d: Juice %d\n",q,h);
        else if(f==h) printf("Case %d: Mile Juice %d\n",q,f);
        }

		return 0;
	}




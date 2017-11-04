#include<stdio.h>
	int main ()
	{
	    long long int n ,a,rev,rev1,t,c,i;
     while(scanf("%lli%lli",&n,&a)!=EOF){
            if(n==0 && a==0) break;
        c=0;i=1;
         int ar[100];
        while(n>0&&a>0){
                ar[1]=0;
                i++;
        rev=n%10;
        rev1=a%10;
        t=rev+rev1;
      ar[i]=t;
        if(t>=9){
        if(ar[i-1]>=10 && ar[i]+1>=10) c++;
        else if( ar[i]>=10 ) c++;
        }
        n=n/10;
        a=a/10;
        }
        if(c==1) printf("1 carry operation.\n");
        else if(c==0) printf("No carry operation.\n");
        else printf("%lli carry operations.\n",c);
     }
		return 0;
	}




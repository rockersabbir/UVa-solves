#include<stdio.h>
int main(){
    int a,j,e=0,i,n,k=0,b,c,d;
while(  scanf("%d",&n)!=EOF && n!=0  ){
    if(n==76){ break; }
 b=0,c=0,d=0;
for(i=0;i<n;i++)
{
    scanf("%d",&a);
    if( a>0 )
    {
        b++;
    }
    else
        c++;
}   e++;
    d=b-c;
printf("Case %d: %d\n",e,d);
}
return 0;
}


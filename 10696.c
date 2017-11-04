#include<stdio.h>
int main(){
long int  n,x;
while( scanf("%d",&n)!=EOF && n!=0  )
{
    if(n>=101)
    {   x=n-10;
        printf("f91(%ld) = %ld\n",n,x);
    }
    else if(n<=100)
    {
        x=n;
        printf("f91(%ld) = 91\n",n);
    }
}
return 0;
}


#include<stdio.h>
int main(){

    int i,a,b,n;
	  while(  scanf("%d",&n)!=EOF &&n!=0 ){
	    a=0;b=5;
	    if(n==2)printf("2\n");
	    else if(n==1)printf("1\n");
	    else{
	    for(i=3;i<=n;i++){
            a=(i*i)+b;
            b=a;
	    }
	    printf("%d\n",a);
	    }
	  }
    return 0;
}

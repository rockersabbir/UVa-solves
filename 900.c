#include<stdio.h>
int main(){
int x,i; long long int a,b,c;
     while(   scanf("%d",&x)!=EOF && x!=0 ){

a=1;b=2;
     if(x==1){
        printf("1\n");
     }
   else  if(x==2){
        printf("2\n");
     }
for(i=2;i<x ;i++){


        c=a+b;
        a=b;
        b=c;
}
if(x!=1 && x!=2 ){
printf("%lli\n",c);
}
     }
return 0;
}

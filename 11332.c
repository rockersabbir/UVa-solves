#include<stdio.h>
int number(long int num){
   long int rev, sum=0;
    while(num) {
        rev=num%10;
        sum=sum+rev;
        num=num/10;
    }
    return sum;
}
int main(){
   long int b;
   while( scanf("%d",&b)!=EOF && b!=0){
    if(b>9){
        while(b>9){
            b=number(b);
        }printf("%d\n",b);
    }
    else if(b<=9) printf("%d\n",b);
   }
return 0;
}

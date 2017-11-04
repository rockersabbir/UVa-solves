#include<stdio.h>
int main(){
    int x,y;
    int i,temp,reverse_num, remainder,flag=0;
    while( scanf("%d",&x)!=EOF ){
        reverse_num=0;flag=0;
        y=x*2;
        printf("%d\n",y);
        for(i=2;i<=x/2;++i)
  {
      if(x%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0){
      temp=x;
      while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   }
   if(reverse_num==x){
        break;
        }
    }
}
return 0;
}

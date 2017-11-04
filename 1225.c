#include<stdio.h>
int main(){
   int x,y,n,q,a,b,c,d,e,f,g,h,i,j,k,l;
   scanf("%d",&l);
   for(k=0;k<l;k++)
    {
        scanf("%d",&y);
   a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;i=0;j=0;
   for(q=1;q<=y;q++){
        n=q;
   while(n!=0){
    x=n%10;
   if(x==0)      j++;
   else if(x==1) a++;
   else if(x==2) b++;
   else if(x==3) c++;
   else if(x==4) d++;
   else if(x==5) e++;
   else if(x==6) f++;
   else if(x==7) g++;
   else if(x==8) h++;
   else if(x==9) i++;
    n=n/10;
   }
   }
   printf("%d %d %d %d %d %d %d %d %d %d\n",j,a,b,c,d,e,f,g,h,i);
  }
return 0;
}

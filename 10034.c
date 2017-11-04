#include<stdio.h>
#include<math.h>
int main(){
    int n,y,x,i,k,c;
    int str1[100],str2[100];
   while( scanf("%d%d",&n,&y)!=EOF ){
    c=0;
        i=0;
       while(1){
        str1[i]=n%10;
        str2[i]=i%10;
        y=y/10;
        n=n/10;
        printf(" %d %d",str1[i],str2[i]);
        x=str1[i]+str2[i];
        if(x>=10){
            c++;
        }
        i++;
        if(n==0 && y==0){
        break;
   }
       }printf("\n%d",c);
   }




return 0;
}

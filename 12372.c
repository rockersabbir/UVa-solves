#include<stdio.h>
#include<math.h>
int main(){
    int i,c=1,t,l,w,h;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&l,&w,&h);
        if(l<=20&&w<=20&&h<=20&&l*w<=400 ){
            printf("Case %d: good\n",c);
            c++;
        }
        else
           {
            printf("Case %d: bad\n",c);
            c++;
           }
    }
return 0;
}

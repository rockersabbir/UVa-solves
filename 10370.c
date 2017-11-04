#include<stdio.h>
int main(){
int n,t,c,i,j,arr[1100];
float total,avr,f,x,y;
scanf("%d",&t);
    for(j=0;j<t;j++){
        c=0;total=0.00;avr=0.00;
        scanf("%d",&n);
         for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
         }
         for(i=0;i<n;i++){
             total =total + arr[i];
         }
         avr=total/n;
         for(i=0;i<n;i++){
             if(arr[i]>avr){
                c++;
             }
         }
         x=n;y=c;
        f=(100/x)*y;
        printf("%.3f%%\n",f);
    }

return 0;
}

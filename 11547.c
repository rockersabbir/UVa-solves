#include<stdio.h>
#include<math.h>
int main(){
 long int y;
 int t,j,n;
 scanf("%d",&t);
for(j=0;j<t;j++){
     scanf("%d",&n);
y=n*567;
y=y/9;
y=y+7492;
y=y*235;
y=y/47;
y=y-498;
    if(y<0){
        printf("%d\n",-(y/10)%10);
    }
    else
        printf("%d\n",(y/10)%10);
}
return 0;
}

#include<stdio.h>
int main(){
      double x,y,z,b,a;

   while( scanf("%lf%lf%lf",&x,&y,&z)!=EOF ){
    a=pow(x,y)%z;
    printf("%.0lf\n",a);
   }
    return 0;
}

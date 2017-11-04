#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,a,x,y,z;
scanf("%d",&a);
for(i=1;i<=a;i++){
scanf("%d%d%d",&x,&y,&z);

if(z>x&&z>y){
if(x>y){
printf("Case %d: %d\n",i,x);
}
else
printf("Case %d: %d\n",i,y);

}
 else if(x>y&&x>z){
    if(y>z)
printf("Case %d: %d\n",i,y);
else
printf("Case %d: %d\n",i,z);

}
else if(y>x&&y>z){
if(x>z){
printf("Case %d: %d\n",i,x);

}
else
printf("Case %d: %d\n",i,z);

}

}
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
int i,x,y,z;
scanf("%d",&x);
for(i=0;i<x;i++){
scanf("%d%d",&y,&z);
if(y<z){
printf("<\n");
}
else if(y>z){
printf(">\n");
}
else
printf("=\n");

}


return 0;

}

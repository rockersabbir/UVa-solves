#include<stdio.h>
#include<math.h>
int main(){
int i,x,y,c=0,k;
while( scanf("%d%d",&i,&x)!=EOF && i!=0 && x!=0 ){
 c=0;
for(i;i<=x;i++){
    y=sqrt(i);
    k=y*y;
    if(k==i){
        c++;
    }
}
printf("%d\n",c);
}

}

#include<stdio.h>

int main(){
int i,j, x,y,max,z[100] ;
scanf("%d",&x);

for(i=1;i<=x;i++){
scanf("%d",&y);

for(j=1;j<=y;j++){

scanf("%d",&z[j] );
if(j>y){
break;
}
}


max=z[1];
for(j=1;j<=y;j++){
if(max<z[j] ){
max=z[j];
}

}

printf("Case %d: %d\n",i,max);
}
return 0;

}

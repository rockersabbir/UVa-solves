#include<stdio.h>
int main(){
int i,j,s,n[20],c=1,count=0;
scanf("%d",&s);
        for(j=0;j<s;j++){count=0;
for(i=0;i<13;i++){
    scanf("%d",&n[i]);
}
    for(i=0;i<13;i++){
    if(n[i]==0){
     count++;

    }
}
        if(count>0){
               printf("Set #%d: No\n",c);
        }
        else
               printf("Set #%d: Yes\n",c);
       c++; }
return 0;
}

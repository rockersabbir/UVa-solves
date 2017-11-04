#include<stdio.h>
int main(){
int x,y,n;
while( scanf("%d%d",&x,&y)!=EOF && x!= -1 && y!=-1 ){



        if( x<y ){
            n=y-x;
            if(100-y+x<n){
                n=100-y+x;
            }
        }
        else if(x>y){
            n=x-y;
           if(100-x+y<n){
               n=100-x+y;
            }
        }
        else{ n=x-y; }


        printf("%d\n",n);
}

return 0;
}

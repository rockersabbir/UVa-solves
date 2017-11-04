#include<stdio.h>

int main(){
    int n,h,w,pc,bd,i,j,x=0,c=0,l,b,m;
    while( scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF ){ c=0;m=600000;
 for(i=0;i<h;i++){
            scanf("%d",&pc);
           long int k=n*pc;  x=0;
        for(j=0;j<w;j++){
            scanf("%d",&bd );
            if(n<=bd && b>=k ){
                x++;
                if(m>=k){
                    m=k;
                    c++;
                }
            }
        }

    }
        if( c!=0  )
            {
                printf("%d\n",m);c=0;
        }
        else
            {
                printf("stay home\n");c=0;
            }

    }
    return 0;
}

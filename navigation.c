#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, k,x,y,n,m;
    while(scanf("%d",&k)&&k!=0){
scanf("%d%d",&n,&m);
    for(i=0;i<k;i++){

    scanf("%d%d",&x,&y);
        if(x==n || y==m)
            printf("divisa\n");
        else if(x>n&&y>m)
            printf("NE\n");
        else if(x>n&&y<m)
            printf("SE\n");
        else if(x<n&&y<m)
            printf("SO\n");
        else if(x<n&&y>m)
            printf("NO\n");
    }
    }
return 0;
}

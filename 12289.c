#include<stdio.h>
#include<string.h>
int main(){
char arr[5];
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++){
 scanf("%s",&arr);
    int l= strlen(arr);
    if(l==5){
        printf("3\n");
    }
    else if(l==3){
        if( arr[0]=='t' || arr[1]=='w' || arr[2]=='o' ){
                printf("2\n");
        }
        else
            printf("1\n");
    }
}


return 0;
}

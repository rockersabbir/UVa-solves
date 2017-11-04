#include<stdio.h>
int main(){
int t, i,j,l=0,asen,dcen,a[20];
scanf("%d",&t);
    for(i=0;i<t;i++){

        for(j=0;j<10;j++){
            scanf("%d",&a[j]);
        }asen=0;dcen=0;
        if(l==0){
        printf("Lumberjacks:\n");
        l++;
    }
        for(j=0;j<10;j++){
            if(a[j]>a[j+1] ){
                dcen++;
            }
           else if(a[j]<a[j+1] ){
                asen++;
            }

        }

        if(dcen==9){
            printf("Ordered\n");
        }
        else if(asen==10){
            printf("Ordered\n");
        }
        else
            printf("Unordered\n");

    }
return 0;
}

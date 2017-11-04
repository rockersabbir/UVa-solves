#include<stdio.h>
int main(){

    int n;
    while( scanf("%d",&n)!=EOF ){
        int q;
        for(q = 0; q<n; q++){
            int j,i,f;
            scanf("%d",&f);
            float arr[f][4];
        for(i=0;i<f;i++){

            for(j=0;j<3;j++){
                scanf("%f",&arr[i][j]);

            }
        }
        int p;
        for(p = 0 ;p<f; p++){

            arr[p][3]= ( ( (arr[p][0]/arr[p][1])*arr[p][2] )*arr[p][1] ) ;
        }
        float sum=0;
        for(i=0;i<f;i++){
            sum+=arr[i][3];
        }
        int s = 0;
        s = (int) sum;
        printf("%d\n",s);

        }
    }
    return 0;
}

#include<stdio.h>
int main (){
        int n;
        while(scanf("%d",&n)!=EOF){

            int c=0;
            int i,a[n];
            for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
            if(n==1){
                printf("Jolly\n");
            }
            else if(n==2){
                if( a[0]-a[1]==1 || a[0]-a[1]== -1){
                    printf("Jolly\n");
                }
                else{
                    printf("Not jolly\n");
                }

            }


            else{
            int j;
            int arr[n-1];
            for(i = 0; i<n-1; i++){
                for(j = 1; j<=n-1; j++){
                    if(a[i]-a[i+1]==j || a[i]-a[i+1]== -j){
                        c++;
                        arr[i] = j;
                    }
                }
            }
            if(j==n-1){
                printf("Not jolly\n");
            }
            else{
               for(i = 0; i<n-1; i++){
                if(arr[i]==NULL){
                    break;
                }
            }
            int p,k,cnt = 0;
            for(p = 0; p<i; p++){
                for(k = 0; k<i; k++){
                    if(arr[p]==arr[k]){
                        cnt++;
                    }
                    if(cnt>1){
                        printf("Not jolly\n");
                    }
                    else{
                        printf("Jolly\n");
                    }
                }
            }

            }

            /*if(a[0]-a[1]==1 || a[0]-a[1]== -1){
            for(i=0;i<n-1;i++){
                if(a[i]-a[i+1]==i+1 || a[i]-a[i+1]== -1*(i+1) ){
                    c++;
                }
            }

            }
            else if( a[0]-a[1]==n-1 || a[0] - a[1]== -1 * (n-1)){
                for(i=0;i<n-1;i++){

                if(a[i]-a[i+1]==(n-(i+1)) || a[i]-a[i+1]== -1*(n-(i+1) ) ){
                    c++;

                }
            }
            }

            if (c== (n-1) ){
                printf("Jolly\n");
            }

             else
                printf("Not jolly\n"); */

            }


        }


        return 0;
}

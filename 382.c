#include<stdio.h>
int main(){
    int n,i,c,a,k,cunt=0;
   while( scanf("%d",&n)!=EOF ){
        if(cunt==0){
            printf("PERFECTION OUTPUT\n");
        }
        else if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        a=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            c=a+i;
            a=c;
        }
     }
     if(n==1){
        printf("    %d  DEFICIENT\n",n);
     }
     else if(c==n){
            if(n>=1&& n<=9){
        printf("    %d  PERFECT\n",n);
            }
            else if(n>=10&& n<=99){
        printf("   %d  PERFECT\n",n);
            }
            else if(n>=100 &&n <=999){
        printf("  %d  PERFECT\n",n);
            }
            else if(n>=1000&&n<=9999){
        printf(" %d  PERFECT\n",n);
            }
            else if(n>=10000 && n<=99999){
        printf("%d  PERFECT\n",n);
            }
     }
     else if(n>c){
            if(n>=1&& n<=9){
        printf("    %d  DEFICIENT\n",n);
            }
            else if(n>=10&& n<=99){
        printf("   %d  DEFICIENT\n",n);
            }
            else if(n>=100 &&n <=999){
        printf("  %d  DEFICIENT\n",n);
            }
            else if(n>=1000&&n<=9999){
        printf(" %d  DEFICIENT\n",n);
            }
            else if(n>=10000 && n<=99999){
        printf("%d  DEFICIENT\n",n);
            }

     }

     else if(n<c){
            if(n>=1&& n<=9){
        printf("    %d  ABUNDANT\n",n);
            }
            else if(n>=10&& n<=99){
        printf("   %d  ABUNDANT\n",n);
            }
            else if(n>=100 &&n <=999){
        printf("  %d  ABUNDANT\n",n);
            }
            else if(n>=1000&&n<=9999){
        printf(" %d  ABUNDANT\n",n);
            }
            else if(n>=10000 && n<=99999){
        printf("%d  ABUNDANT\n",n);
            }
     }
   cunt++;
   }

return 0;
}

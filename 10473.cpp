#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
        char ar[5000];
        int a,b,i,j;
       while( gets(ar) ){
            a=0;b=0;
        int l=strlen(ar);

        if(ar[0]=='-') break;

       else if(ar[1]!='x'){
            for(i=0;i<l;i++){
                a=ar[i]- '0' + (a*10);
            }
            printf("0x%X\n",a);
        }
        else{
            long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int i, j, power=0, digit;
    for(i=l-1; i >= 0; i--) {
        for(j=0; j<16; j++){
            if(ar[i] == hexDigits[j]){
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    }
    printf("%d\n",decimalNumber);
        }

       }

    return 0;
}

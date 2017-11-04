#include<bits/stdc++.h>
#include<string.h>
#define MAX 1000
using namespace std;
int main(){
    char hexaDecimal[MAX],hexaDecimal1[MAX],sign[MAX] ;int t;
    scanf("%d",&t);
    while(t--){
    int i=0,x,a=0,b=0;
    scanf("%s %s %s",hexaDecimal,sign,hexaDecimal1);
    int l=strlen(hexaDecimal);
    if(l==3) printf("0");
    if(l==2) printf("00000");
    if(l==1)  printf("000000000");
    while(hexaDecimal[i]){ l--;
         switch(hexaDecimal[i]){
             case '0': printf("0000");x=0*pow(16,l)+a;a=x; break;
             case '1': printf("0001");x=1*pow(16,l)+a;a=x; break;
             case '2': printf("0010");x=2*pow(16,l)+a;a=x; break;
             case '3': printf("0011");x=3*pow(16,l)+a;a=x; break;
             case '4': printf("0100");x=4*pow(16,l)+a;a=x; break;
             case '5': printf("0101");x=5*pow(16,l)+a;a=x; break;
             case '6': printf("0110");x=6*pow(16,l)+a;a=x; break;
             case '7': printf("0111");x=7*pow(16,l)+a;a=x; break;
             case '8': printf("1000");x=8*pow(16,l)+a;a=x; break;
             case '9': printf("1001");x=9*pow(16,l)+a;a=x; break;
             case '10': printf("0000");x=10*pow(16,l)+a;a=x; break;
             case '11': printf("0001");x=12*pow(16,l)+a;a=x; break;
             case '12': printf("0010");x=12*pow(16,l)+a;a=x; break;
             case '13': printf("0011");x=13*pow(16,l)+a;a=x; break;
             case '14': printf("0100");x=14*pow(16,l)+a;a=x; break;
             case '15': printf("0100");x=15*pow(16,l)+a;a=x; break;
             case 'A': printf("1010");x=10*pow(16,l)+a;a=x; break;
             case 'B': printf("1011");x=11*pow(16,l)+a;a=x; break;
             case 'C': printf("1100");x=12*pow(16,l)+a;a=x; break;
             case 'D': printf("1101");x=13*pow(16,l)+a;a=x; break;
             case 'E': printf("1110");x=14*pow(16,l)+a;a=x; break;
             case 'F': printf("1111");x=15*pow(16,l)+a;a=x; break;

         }
         i++;
    }
    if(sign[0]=='+')
    printf(" + ");
    else printf(" - ");
     i=0;
    int l1=strlen(hexaDecimal1);
    if(l1==3) printf("0");
    if(l1==2 ) printf("00000");
    if(l1==1)  printf("000000000");
    while(hexaDecimal1[i]){ l1--;
        switch(hexaDecimal1[i]){
             case '0': printf("0000");x=0*pow(16,l1)+b;b=x; break;
             case '1': printf("0001");x=1*pow(16,l1)+b;b=x; break;
             case '2': printf("0010");x=2*pow(16,l1)+b;b=x; break;
             case '3': printf("0011");x=3*pow(16,l1)+b;b=x; break;
             case '4': printf("0100");x=4*pow(16,l1)+b;b=x; break;
             case '5': printf("0101");x=5*pow(16,l1)+b;b=x; break;
             case '6': printf("0110");x=6*pow(16,l1)+b;b=x; break;
             case '7': printf("0111");x=7*pow(16,l1)+b;b=x; break;
             case '8': printf("1000");x=8*pow(16,l1)+b;b=x; break;
             case '9': printf("1001");x=9*pow(16,l1)+b;b=x; break;
             case '10': printf("0000");x=10*pow(16,l1)+b;b=x; break;
             case '11': printf("0001");x=11*pow(16,l1)+b;b=x; break;
             case '12': printf("0010");x=12*pow(16,l1)+b;b=x; break;
             case '13': printf("0011");x=13*pow(16,l1)+b;b=x; break;
             case '14': printf("0100");x=14*pow(16,l1)+b;b=x; break;
             case '15': printf("0100");x=15*pow(16,l1)+b;b=x; break;
             case 'A': printf("1010");x=10*pow(16,l1)+b;b=x; break;
             case 'B': printf("1011");x=11*pow(16,l1)+b;b=x; break;
             case 'C': printf("1100");x=12*pow(16,l1)+b;b=x; break;
             case 'D': printf("1101");x=13*pow(16,l1)+b;b=x; break;
             case 'E': printf("1110");x=14*pow(16,l1)+b;b=x; break;
             case 'F': printf("1111");x=15*pow(16,l1)+b;b=x; break;
         }
         i++;
    }if(sign[0]=='+')
  {  int c=a+b;printf(" = %d\n",c);}
   else {  int c=a-b;
   printf(" = %d\n",c);
   }


    }
    return 0;
}


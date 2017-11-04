#include<bits/stdc++.h>
using namespace std;
int mod_till_single(int number){
    int y=0,x=0;
    while(number!=0){
            x=(number%10);
            y=y+x;
            number=number/10;
           }
           return y;
}

int main(){
    char arr[5000],arr1[5000];;
    double c,a,d,e;
    while( gets(arr)  ){a=0;c=0,d=0,e=0;

        int l= strlen(arr);
        for(int i=0;i<l;i++){
            if(arr[i]=='A'||arr[i]=='a'){
                a=1; c=a+c;
            }
           else if(arr[i]=='B'||arr[i]=='b'){
                a=2; c=a+c;
            }
            else if(arr[i]=='C'||arr[i]=='c'){
                a=3; c=a+c;
            }
            else if(arr[i]=='D'||arr[i]=='d'){
                a=4; c=a+c;
            }
            else if(arr[i]=='E'||arr[i]=='e'){
                a=5; c=a+c;
            }
            else if(arr[i]=='F'||arr[i]=='f'){
                a=6; c=a+c;
            }
            else if(arr[i]=='G'||arr[i]=='g'){
                a=7; c=a+c;
            }
            else if(arr[i]=='H'||arr[i]=='h'){
                a=8; c=a+c;
            }
            else if(arr[i]=='I'||arr[i]=='i'){
                a=9; c=a+c;
            }
            else if(arr[i]=='J'||arr[i]=='j'){
                a=10; c=a+c;
            }
            else if(arr[i]=='K'||arr[i]=='k'){
                a=11; c=a+c;
            }
            else if(arr[i]=='L'||arr[i]=='l'){
                a=12; c=a+c;
            }
            else if(arr[i]=='M'||arr[i]=='m'){
                a=13; c=a+c;
            }
            else if(arr[i]=='N'||arr[i]=='n'){
                a=14; c=a+c;
            }
            else if(arr[i]=='O'||arr[i]=='o'){
                a=15; c=a+c;
            }
            else if(arr[i]=='P'||arr[i]=='p'){
                a=16; c=a+c;
            }
            else if(arr[i]=='Q'||arr[i]=='q'){
                a=17; c=a+c;
            }
            else if(arr[i]=='R'||arr[i]=='r'){
                a=18; c=a+c;
            }
            else if(arr[i]=='S'||arr[i]=='s'){
                a=19; c=a+c;
            }
            else if(arr[i]=='T'||arr[i]=='t'){
                a=20; c=a+c;
            }
            else if(arr[i]=='U'||arr[i]=='u'){
                a=21; c=a+c;
            }
            else if(arr[i]=='V'||arr[i]=='v'){
                a=22; c=a+c;
            }
            else if(arr[i]=='W'||arr[i]=='w'){
                a=23; c=a+c;
            }
            else if(arr[i]=='X'||arr[i]=='x'){
                a=24; c=a+c;
            }
            else if(arr[i]=='Y'||arr[i]=='y'){
                a=25; c=a+c;
            }
            else if(arr[i]=='Z'||arr[i]=='z'){
                a=26; c=a+c;
            }
        }
        gets(arr1);
         int l1= strlen(arr1);
         d=0;e=0;
        for(int i=0;i<l1;i++){
            if(arr1[i]=='A'||arr1[i]=='a'){
                d=1; e=d+e;
            }
           else if(arr1[i]=='B'||arr1[i]=='b'){
                d=2; e=d+e;
            }
            else if(arr1[i]=='C'||arr1[i]=='c'){
                d=3; e=d+e;
            }
            else if(arr1[i]=='D'||arr1[i]=='d'){
                d=4; e=d+e;
            }
            else if(arr1[i]=='E'||arr1[i]=='e'){
                d=5; e=d+e;
            }
            else if(arr1[i]=='F'||arr1[i]=='f'){
                d=6; e=d+e;
            }
            else if(arr1[i]=='G'||arr1[i]=='g'){
                d=7; e=d+e;
            }
            else if(arr1[i]=='H'||arr1[i]=='h'){
                d=8; e=d+e;
            }
            else if(arr1[i]=='I'||arr1[i]=='i'){
                d=9; e=d+e;;
            }
            else if(arr1[i]=='J'||arr1[i]=='j'){
                d=10; e=d+e;
            }
            else if(arr1[i]=='K'||arr1[i]=='k'){
                d=11; e=d+e;
            }
            else if(arr1[i]=='L'||arr1[i]=='l'){
                d=12; e=d+e;
            }
            else if(arr1[i]=='M'||arr1[i]=='m'){
                d=13; e=d+e;
            }
            else if(arr1[i]=='N'||arr1[i]=='n'){
                d=14; e=d+e;
            }
            else if(arr1[i]=='O'||arr1[i]=='o'){
                d=15; e=d+e;
            }
            else if(arr1[i]=='P'||arr1[i]=='p'){
                d=16; e=d+e;
            }
            else if(arr1[i]=='Q'||arr1[i]=='q'){
                d=17; e=d+e;
            }
            else if(arr1[i]=='R'||arr1[i]=='r'){
                d=18; e=d+e;
            }
            else if(arr1[i]=='S'||arr1[i]=='s'){
                d=19; e=d+e;
            }
            else if(arr1[i]=='T'||arr1[i]=='t'){
                d=20; e=d+e;
            }
            else if(arr1[i]=='U'||arr1[i]=='u'){
                d=21; e=d+e;
            }
            else if(arr1[i]=='V'||arr1[i]=='v'){
                d=22; e=d+e;
            }
            else if(arr1[i]=='W'||arr1[i]=='w'){
                d=23; e=d+e;
            }
            else if(arr1[i]=='X'||arr1[i]=='x'){
                d=24; e=d+e;
            }
            else if(arr1[i]=='Y'||arr1[i]=='y'){
                d=25; e=d+e;
            }
            else if(arr1[i]=='Z'||arr1[i]=='z'){
                d=26; e=d+e;
            }
        }
        if( c>9){
           while(c>9){
            c=mod_till_single(c);
           }
        }
        if( e>9){
           while(e>9){
            e=mod_till_single(e);
           }
        }
        double result;

        if(c<e)
           {
            result= (c*100)/e;
           }
        else
           {
            result= (e*100)/c;
           }
        printf("%0.2lf %\n",result);
    }
return 0;
}

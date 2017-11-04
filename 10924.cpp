#include<bits/stdc++.h>
#include<string>
using namespace std;
bool prime(int i){
    for(int j=2;j<i;j++){
        if(i%j==0) {
            return false;
        }
    }
    return true;
}

int main(){
char    arr[5000];
int a,i,c;
    while( gets(arr) ){a=0;c=0;
        int l=strlen(arr);
        for(i=0;i<l;i++){
                if(arr[i]=='a'){
                a=1; c=a+c;
            }
           else if(arr[i]=='b'){
                a=2; c=a+c;
            }
            else if(arr[i]=='c'){
                a=3; c=a+c;
            }
            else if(arr[i]=='d'){
                a=4; c=a+c;
            }
            else if(arr[i]=='e'){
                a=5; c=a+c;
            }
            else if(arr[i]=='f'){
                a=6; c=a+c;
            }
            else if(arr[i]=='g'){
                a=7; c=a+c;
            }
            else if(arr[i]=='h'){
                a=8; c=a+c;
            }
            else if(arr[i]=='i'){
                a=9; c=a+c;
            }
            else if(arr[i]=='j'){
                a=10; c=a+c;
            }
            else if(arr[i]=='k'){
                a=11; c=a+c;
            }
            else if(arr[i]=='l'){
                a=12; c=a+c;
            }
            else if(arr[i]=='m'){
                a=13; c=a+c;
            }
            else if(arr[i]=='n'){
                a=14; c=a+c;
            }
            else if(arr[i]=='o'){
                a=15; c=a+c;
            }
            else if(arr[i]=='p'){
                a=16; c=a+c;
            }
            else if(arr[i]=='q'){
                a=17; c=a+c;
            }
            else if(arr[i]=='r'){
                a=18; c=a+c;
            }
            else if(arr[i]=='s'){
                a=19; c=a+c;
            }
            else if(arr[i]=='t'){
                a=20; c=a+c;
            }
            else if(arr[i]=='u'){
                a=21; c=a+c;
            }
            else if(arr[i]=='v'){
                a=22; c=a+c;
            }
            else if(arr[i]=='w'){
                a=23; c=a+c;
            }
            else if(arr[i]=='x'){
                a=24; c=a+c;
            }
            else if(arr[i]=='y'){
                a=25; c=a+c;
            }
            else if(arr[i]=='z'){
                a=26; c=a+c;
            }
             if(arr[i]=='A'){
                a=27; c=a+c;
            }
           else if(arr[i]=='B'){
                a=28; c=a+c;
            }
            else if(arr[i]=='C'){
                a=29; c=a+c;
            }
            else if(arr[i]=='D'){
                a=30; c=a+c;
            }
            else if(arr[i]=='E'){
                a=31; c=a+c;
            }
            else if(arr[i]=='F'){
                a=32; c=a+c;
            }
            else if(arr[i]=='G'){
                a=33; c=a+c;
            }
            else if(arr[i]=='H'){
                a=34; c=a+c;
            }
            else if(arr[i]=='I'){
                a=35; c=a+c;
            }
            else if(arr[i]=='J'){
                a=36; c=a+c;
            }
            else if(arr[i]=='K'){
                a=37; c=a+c;
            }
            else if(arr[i]=='L'){
                a=38; c=a+c;
            }
            else if(arr[i]=='M'){
                a=39; c=a+c;
            }
            else if(arr[i]=='N'){
                a=40; c=a+c;
            }
            else if(arr[i]=='O'){
                a=41; c=a+c;
            }
            else if(arr[i]=='P'){
                a=42; c=a+c;
            }
            else if(arr[i]=='Q'){
                a=43; c=a+c;
            }
            else if(arr[i]=='R'){
                a=44; c=a+c;
            }
            else if(arr[i]=='S'){
                a=45; c=a+c;
            }
            else if(arr[i]=='T'){
                a=46; c=a+c;
            }
            else if(arr[i]=='U'){
                a=47; c=a+c;
            }
            else if(arr[i]=='V'){
                a=48; c=a+c;
            }
            else if(arr[i]=='W'){
                a=49; c=a+c;
            }
            else if(arr[i]=='X'){
                a=50; c=a+c;
            }
            else if(arr[i]=='Y'){
                a=51; c=a+c;
            }
            else if(arr[i]=='Z'){
                a=52; c=a+c;
            }

        }
        if( prime(c)==true ) printf("It is a prime word.\n");
        else if( prime(c)==false ) printf("It is not a prime word.\n");

    }
return 0;
}



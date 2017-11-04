#include<bits/stdc++.h>
using namespace std ;
int main(){

    int t=0; char l;
    scanf("%d%c",&t,&l);

    while(t--) {


 char ar[19];
    gets(ar);

    int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1,x,y,z,p,q,o;

    a=ar[0]-'0';
    a1=ar[1]-'0';
    b=ar[2]-'0';
    b1=ar[3]-'0';
    c=ar[5]-'0';
    c1=ar[6]-'0';
    d=ar[7]-'0';
    d1=ar[8]-'0';
    e=ar[10]-'0';
    e1=ar[11]-'0';
    f=ar[12]-'0';
    f1=ar[13]-'0';
    g=ar[15]-'0';
    g1=ar[16]-'0';
    h=ar[17]-'0';
    h1=ar[18]-'0';

    a*=2;
    b*=2;
    c*=2;
    d*=2;
    e*=2;
    f*=2;
    g*=2;
    h*=2;

    y=0;
    if(a>9){
    x=a;
    z=0;p=0;
    while(x!=0){
        p=x%10;
        z=z+p;
        x/=10;
        }y=z;

    }
    else y=a;



    if(b>9){
    x=b;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        }y+=z;
    } else y+=b;



    if(c>9){
    x=c;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        }y+=z;
    } else y+=c;



    if(d>9){
    x=d;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        } y+=z;
    }  else y+=d;



    if(e>9){
    x=e;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        }y+=z;

    } else y+=e;



    if(f>9){
    x=f;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        }y+=z;
    }else y+=f;



    if(g>9){
    x=g;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        }y+=z;
    } else y+=g;



    if(h>9){
    x=h;
    z=0;
    while(x!=0){
        p=x%10;
        z+=p;
        x/=10;
        } y+=z;
    } else y+=h;


    q=a1+b1+c1+d1+e1+f1+g1+h1;

    q=y+q;

    o=q%10;
    if(o==0) printf("Valid\n");
    else printf("Invalid\n");



    }


 return 0;
}

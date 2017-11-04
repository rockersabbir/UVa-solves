#include<stdio.h>
int main() {
 int h1,h2,m1,m2,p;
    while( scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF    ){
        p=0;
        if(h1==0 &&h2==0 && m1==0 && m2==0 ){
            break;
        }
   else if(h1==h2){
        if(m1>m2) p= (24*60) -(m1-m2);
        else p=(m2-m1);
     }
     else if(h1==0){
            h1=24;
        if(h1<h2 && m1==m2)      p=(h2-h1)*60;
       else if(h1>h2 &&m1==m2 )  p=( 24-(h1-h2) )*60;
       else if( h1<h2 &&m1>m2 )  p=(h2-h1)*60 -(m1-m2);
       else if( h1>h2 && m1>m2 ) p=( ( 24- ( h1-h2 ) )* 60 ) -( m1-m2 );
       else if( h1<h2 && m1<m2 ) p=( (h2-h1)*60 )+ (m2-m1);
       else if( h1>h2 && m1<m2 ) p=( ( 24-(h1-h2) )*60 )  +(m2-m1);
     }
     else if(h2==0){
            h2=24;
        if(h1<h2 && m1==m2)      p=(h2-h1)*60;
       else if(h1>h2 && m1==m2 ) p=( 24-(h1-h2) )*60;
       else if( h1<h2 && m1>m2 ) p=(h2-h1)*60 -(m1-m2);
       else if( h1>h2 && m1>m2 ) p=( 24- ( h1-h2 ) )* 60 -( m1-m2 );
       else if( h1<h2 && m1<m2 ) p= (h2-h1)*60 + (m2-m1);
       else if( h1>h2 && m1<m2 ) p=( 24-(h1-h2) )*60 +(m2-m1);
     }
     else if(h1!=0 && h2!=0 ){
        if(h1<h2 && m1==m2)      p=(h2-h1)*60;
       else if(h1>h2 && m1==m2 ) p=( 24-(h1-h2) )*60;
       else if( h1<h2 && m1>m2 ) p=(h2-h1)*60 -(m1-m2);
       else if( h1>h2 && m1>m2 ) p=( 24- ( h1-h2 ) )*60 -( m1-m2 );
       else if( h1<h2 && m1<m2 ) p= (h2-h1)*60 + (m2-m1);
       else if( h1>h2 && m1<m2 ) p=( 24-(h1-h2) )*60 +(m2-m1);
     }
       printf("%d\n",p);
    }
return 0;
}

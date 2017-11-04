#include<stdio.h>
int main(){
int i,n,d1,d2,m1,m2,y1,y2,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\n");
scanf("%d/%d/%d", &d1, &m1, &y1) ;
scanf("%d/%d/%d", &d2, &m2, &y2) ;
            if( y1==y2 && m1==m2 && d1>d2 ){
                printf("Case #%d: 0\n",c);
                c++;
            }
          else  if( y1==y2 && m1==m2 && d1==d2 ){
                printf("Case #%d: 0\n",c);
                c++;
            }
            else    if( y1<y2){
                printf("Case #%d: Invalid birth date\n",c);
                c++;
            }
            else    if(m1<=m2 && d1>=d2  && y1<=y2){
                printf("Case #%d: Invalid birth date\n",c);
                c++;
            }

      else    if(m1<=m2 && d1<=d2  && y1<=y2){
                printf("Case #%d: Invalid birth date\n",c);
                c++;
            }
            else if(m1==m2 && d1==d2 && y1==y2){
                printf("Case #%d: 0\n",c);
                c++;
            }
            else if(m1>=m2 && d1<=d2 && y1==y2){
                printf("Case #%d: 0\n",c);
                c++;
            }

        else if(y1>y2){

           if(y1-y2==130 && m1==m2 && d1>d2 ){
                printf("Case #%d: 130\n",c );
                c++;
            }
            else if(y1-y2==131 && m1==m2 && d1<d2){

                printf("Case #%d: %d\n",c,( (y1-y2) - 1) );
                c++;
            }
            else  if(y1-y2>130 ){
                printf("Case #%d: Check birth date\n",c);
                c++;
           }
           else if(y1>y2 && m1==m2 && d1<d2){
            printf("Case #%d: %d\n",c,(y1-y2)-1 );
                c++;
           }
           else if(y1>y2 && m1>m2 && d1<d2){
            printf("Case #%d: %d\n",c,(y1-y2)-1 );
                c++;
           }
            else if(y1>y2 && m1<m2 && d1==d2){
            printf("Case #%d: %d\n",c,(y1-y2)-1 );
                c++;
           }
            else if(y1>y2 && m1<m2 && d1>d2){
            printf("Case #%d: %d\n",c,(y1-y2)-1 );
                c++;
           }

           else if(y1-y2<130)
            {
              printf("Case #%d: %d\n",c,(y1-y2) );
                c++;
                }

            else if(m1==m2 &&  d1<d2 && y1>=y2){

                printf("Case #%d: 0\n",c);
                c++;}




        }
    }
return 0;
}

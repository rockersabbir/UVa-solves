 #include<bits/stdc++.h>
 #include<math.h>
 using namespace std;
int main(){
float  h,u,d,f;
float ih,dc,ac,as;
while( scanf("%f %f %f %f",&h,&u,&d,&f)!=EOF && h!=0 && u!=0&& d!=0&& f!=0){
    ih=0;
    ac=ih+u;
    as=ac-d;
float k= (u*f)/100;
    dc=u-k;
int c=1;
    while(1){
        ih=as;
        ac=dc+ih;
        as=ac-d;
        c++;
         if(ac>h){
            printf("success on day %d\n",c);
            break;
        }
       else if(as<0 ||ac<=0) {  printf("failure on day %d\n",c);
            break;
       }dc=dc-k;
    }


}



return 0;
}

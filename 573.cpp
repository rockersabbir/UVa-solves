 #include<bits/stdc++.h>
 #include<math.h>
 using namespace std;
int main(){
double  h,u,d,f;
double ih,dc,ac,as;
while( scanf("%lf %lf %lf %lf",&h,&u,&d,&f)!=EOF && h!=0 && u!=0&& d!=0&& f!=0){
    ih=0;
    ac=ih+u;
    as=ac-d;
double k= (u*f)/100;
    dc=u-k;
int c=1;
    while( true ){
        ih=as;
        ac=dc+ih;
        as=ac-d;
        c++;
        dc=dc-k;
        if(ac>h) break;
        if(ac<0) break; cout<< ac<<" ";
    }
    if(ac>h){
            printf("success on day %d\n",c);
        }
        else {  printf("failure on day %d\n",c);
       }


}
return 0;
}


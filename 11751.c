#include<stdio.h>
#include<math.h>
int  main(){
    int x,c=0;
    float u,v,a,s,t;
   while( scanf("%d",&x)!=EOF && x!=0 ){
        if(x==1){
            c++;
            scanf("%f%f%f",&u,&v,&t);
            a=(v-u)/t;
            s= u*t + (a*t*t)/2;
            printf("Case %d: %.3f %.3f\n",c,s,a);
        }
        else if(x==2){
            c++;
            scanf("%f%f%f",&u,&v,&a);
            t=(v-u)/a;
            s= u*t + (a*t*t)/2;
            printf("Case %d: %.3f %.3f\n",c,s,t);
        }
        else if(x==3){
            c++;
            scanf("%f%f%f",&u,&a,&s);
            int k=u*u + 2*a*s;
            v=sqrt(k);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c,v,t);
        }
        else if(x==4){
            c++;
            scanf("%f%f%f",&v,&a,&s);
            int r=v*v-2*a*s;
            u=sqrt(r);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c,u,t);
        }
   }
return 0;
}

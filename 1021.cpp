#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,b;
    double a,x;
    scanf("%lf", &a);
    n=(int) a;
    printf ("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n/100);
    n %= 100;
    printf("%d nota(s) de R$ 50.00\n", n/50);
    n %= 50;
    printf("%d nota(s) de R$ 20.00\n", n/20);
    n %= 20;
    printf("%d nota(s) de R$ 10.00\n", n/10);
    n %= 10;
    printf("%d nota(s) de R$ 5.00\n", n/5);
    n %= 5;
    printf("%d nota(s) de R$ 2.00\n", n/2);
    n %= 2;
     printf ("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n);


    x=a;
    x=x*100;
    b=(int) x;
    b%=100;



    printf ("%d moeda(s) de R$ 0.50\n",b/50);
    b%=50;
    printf ("%d moeda(s) de R$ 0.25\n",b/25);
    b%=25;
    printf ("%d moeda(s) de R$ 0.10\n",b/10);
    b%=10;
    printf ("%d moeda(s) de R$ 0.05\n",b/5);
    b%=5;
    printf ("%d moeda(s) de R$ 0.01\n",b);



return 0;

}



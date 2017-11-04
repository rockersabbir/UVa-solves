#include<bits/stdc++.h>
using namespace std;
int rev(int x){
    int q=0;
   while(x!=0) {
    q=x%10+ q*10;
    x=x/10;
   }
return q;
}
int main(){
    char a[5000];
   while (gets(a)) {
    int l= strlen(a);
    int total =0,ch;
    for (int i=0;i<l;i++){
        total=a[i]- '0' + total *10;
    }int q=0,x;
    while(ch!=0){
        ch=total%100;
        x=rev(ch);
        total=total/100;
           if(x==32) printf(" ");
  else     if(x==33) printf("!");
  else     if(x==44) printf(",");
  else     if(x==46) printf(".");
  else     if(x==58) printf(":");
  else     if(x==59) printf(";");
  else     if(x==63) printf("?");
else if(x==65) printf("A");
else if(x==66) printf("B");
else if(x==67) printf("C");
else if(x==68) printf("D");
else if(x==69) printf("E");
else if(x==70) printf("F");
else if(x==71) printf("G");
else if(x==72) printf("H");
else if(x==73) printf("I");
else if(x==74) printf("J");
else if(x==75) printf("K");
else if(x==76) printf("L");
else if(x==77) printf("M");
else if(x==78) printf("N");
else if(x==79) printf("O");
else if(x==80) printf("P");
else if(x==81) printf("Q");
else if(x==82) printf("R");
else if(x==83) printf("S");
else if(x==84) printf("T");
else if(x==85) printf("U");
else if(x==86) printf("V");
else if(x==87) printf("W");
else if(x==88) printf("X");
else if(x==89) printf("Y");
else if(x==90) printf("Z");
else  if(x==97) printf("a");
else if(x==98) printf("b");
else if(x==99) printf("c");
else if(x==100) printf("d");
else if(x==101) printf("e");
else if(x==102) printf("f");
else if(x==103) printf("g");
else if(x==104) printf("h");
else if(x==105) printf("i");
else if(x==106) printf("j");
else if(x==107) printf("k");
else if(x==108) printf("l");
else if(x==109) printf("m");
else if(x==110) printf("n");
else if(x==111) printf("o");
else if(x==112) printf("p");
else if(x==113) printf("q");
else if(x==114) printf("r");
else if(x==115) printf("s");
else if(x==116) printf("t");
else if(x==117) printf("u");
else if(x==118) printf("v");
else if(x==119) printf("w");
else if(x==120) printf("x");
else if(x==121) printf("y");
else if(x==122) printf("z");
    }
   }
return 0;
}

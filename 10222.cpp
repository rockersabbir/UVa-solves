#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[5000];
    while(gets(a) ){
            int l=strlen(a);
            for(int i=0;i<l;i++){
                 if(a[i] == ' ') printf(" ");
                else if(a[i]=='D'|| a[i]=='d') printf("a");
                else if(a[i]=='F'|| a[i]=='f') printf("s");
                else if(a[i]=='G'|| a[i]=='g') printf("d");
                else if(a[i]=='H'|| a[i]=='h') printf("f");
                else if(a[i]=='J'|| a[i]=='j') printf("g");
                else if(a[i]=='K'|| a[i]=='k') printf("h");
                else if(a[i]=='L'|| a[i]=='l') printf("j");
                else if(a[i]==';') printf("k");
                else if(a[i] == '\'') printf("l");
                else if(a[i] == '\\') printf("[");
                else if(a[i] == 'C'|| a[i]=='c') printf("z");
                else if(a[i] == 'E'|| a[i]=='e') printf("q");
                else if(a[i] == 'R'|| a[i]=='r') printf("w");
                else if(a[i] == 'T'|| a[i]=='t') printf("e");
                else if(a[i] == 'Y'|| a[i]=='y') printf("r");
                else if(a[i] == 'U'|| a[i]=='u') printf("t");
                else if(a[i] == 'I'|| a[i]=='i') printf("y");
                else if(a[i] == 'O'|| a[i]=='o') printf("u");
                else if(a[i] == 'P'|| a[i]=='p') printf("i");
                else if(a[i] == '[') printf("o");
                else if(a[i] == ']') printf("p");
                else if(a[i] == 'V'|| a[i]=='v') printf("x");
                else if(a[i] == 'B'|| a[i]=='b') printf("c");
                else if(a[i] == 'N'|| a[i]=='n') printf("v");
                else if(a[i] == 'M'|| a[i]=='m') printf("b");
                else if(a[i] == ',') printf("n");
                else if(a[i] == '.') printf("m");n
                else if(a[i] == '\/') printf(",");
            }printf("\n");
    }
return 0;
}




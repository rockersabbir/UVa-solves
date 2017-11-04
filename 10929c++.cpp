#include <iostream>
using namespace std;
int main ()
{
    long long x;
    while (cin >> x){
        if (x%11 == 0)
            cout << x << " is a multiple of 11" << endl;
        else
            cout << x << " is not a multiple of 11" << endl;
    }
    return 0;
}

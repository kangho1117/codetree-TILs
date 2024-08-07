#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    a -= 11;
    b -= 11;
    c -= 11;
    if(a < 0 ) cout<< -1;
    else
    {
        b += a*24;
        if(b < 0 ) cout<< -1;
        else
        {
            c += b*60;
            cout<<c;
        }
    }
    return 0;
}
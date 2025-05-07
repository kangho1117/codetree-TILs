#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c=0;
    cin>>a>>b;
    cout<<a/b<<".";
    a -= (a/b)*b;
    for(int i=0;i<20;i++)
    {
        a*=10;
        cout<<a/b;
        a-=(a/b*b);
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a>=90)
    {
        if(95 <= b && b<=100) cout<<100000;
        else if(90 <=b) cout<<50000;
        else cout<<0;
    }
    else cout<<0;
    return 0;
}
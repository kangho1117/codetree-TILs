#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    if(t<0) cout<<"ice";
    else if(100<=t) cout<<"vapor";
    else cout<<"water";
    return 0;
}
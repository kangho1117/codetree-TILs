#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<0) cout<<"ice";
    else if(100<=n) cout<<"vapor";
    else cout<<"water";
    return 0;
}
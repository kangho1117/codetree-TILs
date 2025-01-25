#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    float c = float(a+b)/float(a-b);
    cout.precision(2);
    cout<<fixed<<c;
    return 0;
}
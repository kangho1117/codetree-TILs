#include <iostream>
using namespace std;
int main() {
    double a,b;
    cin>>a>>b;
    cout<<a+b<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<(a+b)/2;
    return 0;
}
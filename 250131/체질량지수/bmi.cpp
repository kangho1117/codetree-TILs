#include <iostream>
using namespace std;
int main() {
    int b,h,w;
    cin>>h>>w;
    b = 10000*w/(h*h);
    cout<<b;
    if(b>=25) cout<<"\nObesity";
    return 0;
}
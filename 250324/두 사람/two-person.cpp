#include <iostream>
using namespace std;
int main() {
    int a,b;
    char ca,cb;
    cin>>a>>ca>>b>>cb;
    if((a>=19 && ca=='M') || (b>=19 && cb=='M')) cout<<1;
    else cout<<0;
    return 0;
}
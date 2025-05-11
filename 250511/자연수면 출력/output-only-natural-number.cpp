#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a<0) cout<<0;
    else if(a%2==0)
        for(int i=0;i<b;i++) cout<<a;
    return 0;
}
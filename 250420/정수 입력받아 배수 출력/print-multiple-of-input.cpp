#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=n,j=0;j<5;j++,i+=n)
        cout<<i<<" ";
    return 0;
}
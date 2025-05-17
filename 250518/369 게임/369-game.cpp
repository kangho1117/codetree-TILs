#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i/100 == 3 || i%100/10==3 || i%10==3) cout<<0<<" ";
        else cout<<i<<" ";
    }
    return 0;
}
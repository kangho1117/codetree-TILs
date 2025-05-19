#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp%2!=0 && temp%3==0) cout<<temp<<"\n";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n=10,cnt=0;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp%2!=0) cnt++;
    }
    cout<<cnt;
    return 0;
}
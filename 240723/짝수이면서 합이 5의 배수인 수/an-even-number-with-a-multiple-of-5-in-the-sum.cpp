#include <iostream>
using namespace std;
void check(int n)
{
    if(n%2==0 && ((n/10)+(n%10))%5==0) cout<<"Yes";
    else cout<<"No";
}
int main() {
    int n;
    cin>>n;
    check(n);
    return 0;
}
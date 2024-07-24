#include <iostream>
using namespace std;
int powsum(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return powsum(n/10) + (n%10)*(n%10);
}
int main() {
    int n;
    cin>>n;
    cout<<powsum(n);
    return 0;
}
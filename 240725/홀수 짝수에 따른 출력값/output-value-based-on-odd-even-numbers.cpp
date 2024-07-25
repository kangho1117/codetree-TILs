#include <iostream>
using namespace std;
int oddeven(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return n + oddeven(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<oddeven(n);
    return 0;
}
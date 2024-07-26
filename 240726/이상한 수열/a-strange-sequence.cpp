#include <iostream>
using namespace std;
int cal(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return cal(int(n/3)) + cal(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<cal(n);
    return 0;
}
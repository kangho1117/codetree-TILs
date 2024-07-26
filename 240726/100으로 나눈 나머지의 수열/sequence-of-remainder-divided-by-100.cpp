#include <iostream>
using namespace std;
int cal(int n)
{
    if(n==1) return 2;
    if(n==2) return 4;
    return (cal(n-1) * cal(n-2))%100;
}
int main() {
    int n;
    cin>>n;
    cout<<cal(n);
    return 0;
}
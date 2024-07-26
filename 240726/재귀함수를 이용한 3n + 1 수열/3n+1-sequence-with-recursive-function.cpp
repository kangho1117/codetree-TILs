#include <iostream>
using namespace std;
int cal(int n, int cnt)
{
    if(n==1) return cnt;
    if(n%2==0) n/=2;
    else n = 3*n+1;
    return cal(n,cnt+1);
}
int main() {
    int n;
    cin>>n;
    cout<<cal(n, 0);
    return 0;
}
#include <iostream>
using namespace std;
void cal(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    cal(n-1);
    cout<<n<<" ";
}
int main() {
    int n;
    cin>>n;
    cal(n);
    return 0;
}
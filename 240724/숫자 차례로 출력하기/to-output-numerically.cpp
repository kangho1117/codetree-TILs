#include <iostream>
using namespace std;
void print1(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    print1(n-1);
}
void print2(int n)
{
    if(n==0) return;
    print2(n-1);
    cout<<n<<" ";
}
int main() {
    int n;
    cin>>n;
    print2(n);
    cout<<"\n";
    print1(n);
    return 0;
}
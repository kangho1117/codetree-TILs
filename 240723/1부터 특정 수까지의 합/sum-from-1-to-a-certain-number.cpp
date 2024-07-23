#include <iostream>
using namespace std;
int sumdiv(int n)
{
    if(n==1) return 1;
    return n + sumdiv(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<sumdiv(n)/10;
    return 0;
}
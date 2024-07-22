#include <iostream>
using namespace std;
int fun(int a, int b)
{
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}
int main() {
    int n,m;
    cin>>n>>m;
    if(n < m)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    cout<<fun(n, m);
    return 0;
}
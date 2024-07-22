#include <iostream>
using namespace std;
int fun(int a, int b)
{
    if(a < b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    int c = a % b;
    if(c != 0)
    {
        a = b;
        b = c;
        return fun(b, c);
    }
    return b;
}
int main() {
    int n,m;
    cin>>n>>m;
    cout<<fun(n, m);
    return 0;
}
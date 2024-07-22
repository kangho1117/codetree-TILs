#include <iostream>
using namespace std;
int main() {
    int n,m,a,b;
    cin>>n>>m;
    if(n<m)
    {
        a = m;
        b = n;
    }
    int c = a%b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    cout <<(n*m)/b;
    return 0;
}
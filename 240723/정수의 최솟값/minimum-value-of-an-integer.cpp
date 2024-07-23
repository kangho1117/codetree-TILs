#include <iostream>
#include <algorithm>
using namespace std;
int low(int a,int b,int c)
{
    return min(a,min(b,c));
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<low(a,b,c);
    return 0;
}
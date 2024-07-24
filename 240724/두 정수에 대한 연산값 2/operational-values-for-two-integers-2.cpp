#include <iostream>
#include <vector>
using namespace std;
pair<int,int> cal(int a, int b)
{
    if(a>b)
    {
        a*=2;
        b+=10;
    }
    else
    {
        b*=2;
        a+=10;
    }
    return {a,b};
}
int main() {
    int a,b;
    cin>>a>>b;
    pair<int,int> p = cal(a,b);
    cout<<p.first<<" "<<p.second;
    return 0;
}
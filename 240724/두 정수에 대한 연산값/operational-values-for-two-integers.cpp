#include <iostream>
#include <vector>
using namespace std;
pair<int,int> cal(int a, int b)
{
    int sum;
    if(a>b)
    {
        a+=25;
        b*=2;
    }
    else 
    {
        b+=25;
        a*=2;
    }
    return {a,b};
}
int main() {
    int a,b;
    cin>>a>>b;
    pair<int,int> p= cal(a,b);
    cout<<p.first<<" "<<p.second;
    return 0;
}
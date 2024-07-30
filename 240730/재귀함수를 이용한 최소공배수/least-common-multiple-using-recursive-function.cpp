#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> vec;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b/gcd(a,b));
}
int main() {
    int c,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    temp = 1;
    while(vec.size() != 0)
    {
        temp = lcm(temp, vec.back());
        vec.pop_back();
    }
    cout<<temp;
    return 0;
}
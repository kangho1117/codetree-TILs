#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;
bool cmp(tuple<int,int,int,string> &a, tuple<int,int,int,string> &b)
{
    return get<0>(a)+get<1>(a)+get<2>(a) <= get<0>(b)+get<1>(b)+get<2>(b);
}
int main() {
    int n,a,b,c;
    string str;
    cin>>n;
    tuple<int,int,int,string> t[n];
    for(int i=0;i<n;i++)
    {
        cin>>str>>a>>b>>c;
        t[i] = make_tuple(a,b,c,str);
    }
    sort(t,t+n,cmp);
    for(auto &a : t)
        cout<<get<3>(a)<<" "<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
    return 0;
}
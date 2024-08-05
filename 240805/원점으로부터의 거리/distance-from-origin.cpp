#include <iostream>
#include <tuple>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(tuple<int,int,int> &a, tuple<int,int,int> &b)
{
    int cal1 = sqrt(pow(get<0>(a),2))+sqrt(pow(get<1>(a),2));
    int cal2 = sqrt(pow(get<0>(b),2))+sqrt(pow(get<1>(b),2));
    if(cal1 == cal2) return get<2>(a) < get<2>(b);
    return cal1 < cal2;
}
int main() {
    int n;
    cin>>n;
    tuple<int,int,int> t[n];
    for(int i=0,a,b;i<n;i++)
    {
        cin>>a>>b;
        t[i] = make_tuple(a,b,i+1);
    }
    sort(t,t+n,cmp);
    for(auto &a : t)
    cout<<get<2>(a)<<"\n";
    return 0;
}
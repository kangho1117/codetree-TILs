#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
int main() {
    int n,a,b;
    cin>>n;
    tuple<int,int,int> t[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        t[i] = make_tuple(-a,-b,i+1);
    }
    sort(t,t+n);
    for(auto &a : t)
        cout<<-get<0>(a)<<" "<<-get<1>(a)<<" "<<get<2>(a)<<"\n";
    return 0;
}
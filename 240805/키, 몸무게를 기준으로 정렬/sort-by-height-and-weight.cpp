#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int n,a,b;
    string name;
    cin>>n;
    tuple<int,int,string> t[n];
    for(int i=0;i<n;i++)
    {
        cin>>name>>a>>b;
        t[i] = make_tuple(a,-b,name);
    }
    sort(t,t+n);
    for(auto &a : t)
        cout<<get<2>(a)<<" "<<get<0>(a)<<" "<<-get<1>(a)<<"\n";
    return 0;
}
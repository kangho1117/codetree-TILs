#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    tuple<int,int,int,string> t[n];
    for(int i=0;i<n;i++)
    {
        string name;
        int a,b,c;
        cin>>name>>a>>b>>c;
        t[i] = make_tuple(-a, -b, -c, name);
    }
    sort(t,t+n);
    for(auto &a : t)
        cout<<get<3>(a)<<" "<<-get<0>(a)<<" "<<-get<1>(a)<<" "<<-get<2>(a)<<"\n";
    return 0;
}
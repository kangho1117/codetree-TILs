#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    tuple<int,int,string> t[n];
    for(int i=0;i<n;i++)
    {
        string str;
        int a,b;
        cin>>str>>a>>b;
        t[i] = make_tuple(a,b,str);
    }
    sort(t, t+n);
    for(auto &a : t)
        cout<<get<2>(a)<<" "<<get<0>(a)<<" "<<get<1>(a)<<"\n";
    return 0;
}
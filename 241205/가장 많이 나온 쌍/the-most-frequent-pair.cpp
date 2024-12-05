#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main() {
    int n,m,max = 0;
    cin>>n>>m;
    map<pair<int,int>,int> mp;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b;
        if(a > b)
        {
            c = a;
            a = b;
            b = c;
        }
        if(mp.find({a,b}) != mp.end())
        {
            mp[{a,b}] += 1;
        }
        else mp.insert({{a,b},1});
    }
    for(auto &a : mp)
        if(max < a.second) max = a.second;
    cout<<max;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
int main() {
    int n,b,maxnum=0;
    cin>>n>>b;
    vector<pair<int,int>> v(n+1,{0,0});
    for(int i=1;i<=n;i++)
    {
        int p,s;
        cin>>p>>s;
        v[i]={p,s};
    }
    sort(v.begin(), v.end(),cmp);
    for(int i=1;i<=n;i++)
    {
        v[i].first /=2;
        for(int j=1, money = b;j<=n;j++)
        {
            int temp = v[j].first + v[j].second;
            if(b-temp>=0 && maxnum < j) 
            {maxnum = j; b-=temp;}
        }
        v[i].first *= 2;
    }
    cout<<maxnum;
    return 0;
}
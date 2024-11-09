#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
bool cmp2(pair<int,int> a, pair<int,int> b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
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
            money -= (v[j].first + v[j].second);
            if(money<0)
            {
                if(maxnum < j-1) maxnum = j-1;
                break;
            }
        }
        v[i].first *= 2;
    }
    sort(v.begin(), v.end(),cmp2);
    for(int i=1;i<=n;i++)
    {
        v[i].second /=2;
        for(int j=1, money = b;j<=n;j++)
        {
            money -= (v[j].first + v[j].second);
            if(money<0)
            {
                if(maxnum < j-1) maxnum = j-1;
                break;
            }
        }
        v[i].second *= 2;
    }
    cout<<maxnum;
    return 0;
}
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
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        int p,s;
        cin>>p>>s;
        v[i]={p,s};
    }
    sort(v.begin(), v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        v[i].first /=2;
        for(int j=0, money = b;j<n;j++)
        {
            b-=(v[j].first + v[j].second);
            if(b<=0) 
            {
                if(maxnum < j) maxnum = j;
            }
        }
    }
    cout<<maxnum;
    return 0;
}
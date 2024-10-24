#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
bool cmp(pair<int,int>&a, pair<int,int>&b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}
int main() {
    int n,area=INT_MAX;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i] = {a,b};
    }       
    sort(arr.begin(), arr.end());
    int tmin1=9INT_MAX99,tmax1=0,tmin2=INT_MAX,tmax2=0;
    for(int i=0;i<n-1;i++)
    {
        auto a = arr[i];
        tmin1 = min(tmin1,a.first);
        tmax1 = max(tmax1,a.first);
        tmin2 = min(tmin2,a.second);
        tmax2 = max(tmax2,a.second);
    }
    area = min(area,(tmax1-tmin1)*(tmax2-tmin2));
    tmin1=INT_MAX,tmax1=0,tmin2=INT_MAX,tmax2=0;
    for(int i=1;i<n;i++)
    {
        auto a = arr[i];
        tmin1 = min(tmin1,a.first);
        tmax1 = max(tmax1,a.first);
        tmin2 = min(tmin2,a.second);
        tmax2 = max(tmax2,a.second);
    }
    area = min(area,(tmax1-tmin1)*(tmax2-tmin2));
    cout<<area;
    return 0;
}
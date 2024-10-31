#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans = n;
    map<int,bool> mp;
    vector<pair<int,int>> vec;
    for(int i=0,x1,x2;i<n;i++)
    {
        cin>>x1>>x2;
        vec.push_back({x1,x2});
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i].second > vec[j].second) 
            {
                mp.insert({i,1});
                mp.insert({j,1});
            }
        }
    }
    cout<<mp.size();
    return 0;
}
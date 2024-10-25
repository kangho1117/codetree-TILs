#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int n,mini=INT_MAX;
    cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            int temp = pow(vec[i].first-vec[j].first,2) + pow(vec[i].second-vec[j].second,2);
            mini = min(mini, temp);
        }
    }
    cout<<mini;
    return 0;
}
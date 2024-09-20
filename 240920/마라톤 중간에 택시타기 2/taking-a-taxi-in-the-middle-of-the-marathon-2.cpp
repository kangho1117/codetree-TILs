#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n,min=200000,ori=0;
    cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
        if(i!=0) ori += sqrt(pow(x-vec[i-1].first,2))+ sqrt(pow(y-vec[i-1].second,2));
    }

    for(int i=1;i<n-1;i++)
    {
        int d = ori;
        d-=sqrt(pow(vec[i].first-vec[i-1].first,2)) + sqrt(pow(vec[i].second-vec[i-1].second,2));
        d-=sqrt(pow(vec[i].first-vec[i+1].first,2)) + sqrt(pow(vec[i].second-vec[i+1].second,2));
        d+=sqrt(pow(vec[i+1].first-vec[i-1].first,2)) + sqrt(pow(vec[i+1].second-vec[i-1].second,2));
        if(d < min) min = d;
    }    
    cout<<min;
    return 0;
}
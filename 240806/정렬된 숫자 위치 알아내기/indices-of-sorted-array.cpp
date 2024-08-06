#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
bool cmp(tuple<int,int,int> &a, tuple<int,int,int> &b)
{
    return get<1>(a) < get<1>(b);
}
int main() {
    int n;
    cin>>n;
    vector<tuple<int,int,int>> vec;
    for(int i=0,temp;i<n;i++)    
    {
        cin>>temp;
        vec.push_back(make_tuple(temp,i+1,0));
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++)
        get<2>(vec[i]) = i+1;   
    sort(vec.begin(), vec.end(), cmp);
    for(auto &a : vec)
        cout<<get<2>(a)<<" ";
    return 0;
}
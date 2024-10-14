#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,size=0;
    cin>>n;
    vector<pair<char,int>> arr;
    for(int i=0,a;i<n;i++)
    {
        char c;
        cin>>a>>c;
        arr.push_back({a,c});
    }
    sort(arr.begin(), arr.end());
for(int k=1;k<=n;k++)
{
    for(int i=0;i<n;i++)
    {
        int H=0, G=0;
        vector<pair<int,char>> temp;
        for(int j=i; j<i+k && j<n;j++)
        {
            if(arr[j].second == 'H') {H++;temp.push_back({arr[j].first,'H'});}
            else if(arr[j].second == 'G') {G++;temp.push_back({arr[j].first,'G'});}
        }
        if(H==G)
            size = max(size, temp[temp.size()-1].first - temp[0].first);
        else if(H==0)
            size = max(size, temp[temp.size()-1].first - temp[0].first);
        else if(G==0)
            size = max(size, temp[temp.size()-1].first - temp[0].first);
    }
}
    cout<<size;
    return 0;
}
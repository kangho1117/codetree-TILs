#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int k,n;
    cin>>k>>n;
    vector<vector<int>> arr(n+1,vector<int>(n+1,0));
    vector<vector<int>> vec(n+1,vector<int>());
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j=1;j<n;j++)
    {
        int num = arr[1][j];
        for(int w=j+1;w<=n;w++)
        {
            vec[num].push_back(arr[1][w]);   
        }
    }

    for(int i=2;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int num = arr[i][j];
      
            for(int w=1;j<=n || w<=n;w++)
            {
                if(arr[i][w] == num) break;
                vec[num].erase(remove(vec[num].begin(), vec[num].end(), arr[i][w]), vec[num].end());
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt += vec[i].size();
        // cout<<i<<" : ";
        // for(auto &b : vec[i])
        // {
        //     cout<<b<<" ";
        // }
        // cout<<"\n";
    }
    cout<<cnt;
    return 0;
}
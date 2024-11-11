#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,b,ans=0;
    cin>>n>>b;
    vector<vector<int>> arr(n,vector<int>(2,0)),arr2(n,vector<int>(2,0));
    for(int i=0,a,b;i<n;i++)
    {
        cin>>a>>b;
        arr[i][0] = a;
        arr[i][1] = b;
        arr2[i][0] = b;
        arr2[i][1] = a;
    }
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++)
    {
        arr[i][0]/=2;
        int cnt=0,budget=b;
        for(int j=0;j<n;j++)
        {
            int price = arr[j][0]+arr[j][1];
            if(budget - price >= 0)
            {
                budget -= price;
                cnt++;
            }
        }
        arr[i][0]*=2;
        if(cnt > ans) ans = cnt;
    }
    sort(arr2.begin(), arr2.end());
    for(int i=0;i<n;i++)
    {
        arr2[i][1]/=2;
        int cnt=0,budget=b;
        for(int j=0;j<n;j++)
        {
            int price = arr2[j][0]+arr2[j][1];
            if(budget - price >= 0)
            {
                budget -= price;
                cnt++;
            }
        }
        arr2[i][1]*=2;
        if(cnt > ans) ans = cnt;
    }
    cout<<ans;
    return 0;
}
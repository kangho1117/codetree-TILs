#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,b,ans=0;
    cin>>n>>b;
    int arr[n][2];
    for(int i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    
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
    cout<<ans;
    return 0;
}
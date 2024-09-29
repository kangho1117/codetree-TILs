#include <iostream>
using namespace std;
int main() {
    int n,s,ans=100000;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j) continue;
            int sum=0;
            for(int k=0;k<n;k++)
            {
                if(k == i || k== j) continue;
                sum+=arr[k];
            }
            if(sum>20 && sum-20 < ans)ans = sum-20;
            else if(sum<20 && 20-sum < ans) ans = 20-sum;
        }
    }
    cout<<ans;
    return 0;
}
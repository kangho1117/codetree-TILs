#include <iostream>
using namespace std;
int main() {
    int n,s,ans=10000000;
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
            if(sum>s && sum-s < ans) ans = sum-s;
            else if(sum<s && s-sum < ans) ans = s-sum;
        }
    }
    cout<<ans;
    return 0;
}
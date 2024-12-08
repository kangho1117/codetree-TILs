#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,ans=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            //cout<<arr[i]<<" "<<arr[j]<<" "<<arr[i]-arr[j]<<"\n";
            if(arr[i]-arr[j]<=k) sum++;
        }
        if(sum > ans) ans = sum;
    }
    cout<<ans;
    return 0;
}
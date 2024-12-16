#include <iostream>
using namespace std;
int main() {
    int n,ans=100000;
    cin>>n;
    int arr[n],k=17;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0; i<=100-k; i++)
    {
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j] < i) cnt += (i-arr[j]) * (i-arr[j]);
            else if(i+k < arr[j]) cnt += (arr[j]-(i+k)) * (arr[j]-(i+k));
        }
        if(cnt < ans) ans = cnt;
    }
    cout<<ans;
    return 0;
}
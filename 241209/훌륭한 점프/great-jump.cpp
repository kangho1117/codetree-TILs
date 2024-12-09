#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=arr[0];i<=n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=i) cnt=0;
            else cnt++;
            if(cnt>=k) break;
        }
        if(cnt<k) {
            cout<<i;
            break;
        }
    }
    return 0;
}
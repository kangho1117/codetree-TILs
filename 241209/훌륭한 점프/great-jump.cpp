#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=arr[0];i<=100;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=i) cnt=0;
            else cnt++;
            if(cnt>=k) break;
        }
        if(cnt<k) {
            if(i > arr[n-1]) cout<<i;
            else cout<<arr[n-1];
            break;
        }
    }
    return 0;
}
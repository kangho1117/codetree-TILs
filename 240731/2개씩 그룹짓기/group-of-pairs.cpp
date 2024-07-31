#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0, j=n-1; i <= n/2; i++,j--)
        if(max < arr[i]+arr[j]) max = arr[i]+arr[j];
    cout<<max;
    return 0;
}
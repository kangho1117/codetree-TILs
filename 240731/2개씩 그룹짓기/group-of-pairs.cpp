#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, max=0;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++)
        cin>>arr[i];
    sort(arr,arr+2*n);
    for(int i=0, j=2*n-1; i <= n; i++,j--)
        if(max < arr[i]+arr[j]) max = arr[i]+arr[j];
    cout<<max;
    return 0;
}
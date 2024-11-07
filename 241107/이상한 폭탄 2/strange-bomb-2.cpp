#include <iostream>
using namespace std;
int main() {
    int n,k,bomb=-1;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=i+k;j++)
        {
            if(arr[i] == arr[j] && arr[i]> bomb) bomb = arr[i];
        }
        for(int j=i-1;j>=0 && j>=i-k;j--)
        {
            if(arr[i] == arr[j] && arr[i]> bomb) bomb = arr[i];
        }
    }
    cout<<bomb;
    return 0;
}
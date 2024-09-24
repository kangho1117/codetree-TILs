#include <iostream>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(arr[i] + arr[j] > max) max = arr[i] + arr[j];
        }
    }
    cout<<max;
    return 0;
}
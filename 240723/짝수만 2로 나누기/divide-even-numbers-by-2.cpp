#include <iostream>
using namespace std;
void cal(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0) arr[i]/=2;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    cal(arr,n);
    return 0;
}
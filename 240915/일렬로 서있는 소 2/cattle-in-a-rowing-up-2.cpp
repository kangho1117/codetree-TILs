#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i] < arr[j] && arr[j] < arr[k]) sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
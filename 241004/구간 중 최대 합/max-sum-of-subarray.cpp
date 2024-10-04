#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,k,sum=0;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0,temp;i+k<n;i++)
    {
        temp=0;
        for(int j=i;j<i+k;j++)
        {
            temp+=arr[j];
        }
        if(temp > sum) sum = temp;
    }
    cout<<sum;
    return 0;
}
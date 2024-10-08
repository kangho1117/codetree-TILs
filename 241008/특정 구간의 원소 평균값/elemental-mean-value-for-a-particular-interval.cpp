#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int k=1; k<=n; k++)
    {
        for(int i = 0, sum; i<=n-k; i++)
        {
            sum=0;
            for(int j=i; j<i+k && i+k<n; j++)
            {
                sum+=arr[j];
            }
            sum/=k;
            //cout<<k<<" "<<sum<<"\n";
            for(int z=0;z<n;z++)
            {
                if(arr[z] == sum)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}
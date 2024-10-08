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
        for(int i = 0; i<n; i++)
        {
            double sum=0;
            for(int j=i; i+k<=n && j<i+k ; j++) sum+=arr[j];
            sum/=(double)k;
            if(sum - (int)sum == 0)
            {
                for(int j=i; i+k<=n && j<i+k ; j++)
                {
                    if(sum==0) break;
                    else if(arr[j] == sum)
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}
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
        for(int i = 0, sum; i<n; i++)
        {
            sum=0;
            for(int j=i; i+k<=n && j<i+k ; j++)
            {
                sum+=arr[j];
            }
            double temp = (double)sum/(double)k;
            if(temp - (int)temp == 0)
            {
            for(int j=i; i+k<=n && j<i+k ; j++)
            {
                if(sum==0) break;
                else if(arr[j] == temp)
                {
                    cnt++;
                    break;
                }
            }
                
            }
            //cout<<k<<" "<<temp<<" "<<i<<" "<<i+k-1<<"\n";
        }
    }
    cout<<cnt;
    return 0;
}
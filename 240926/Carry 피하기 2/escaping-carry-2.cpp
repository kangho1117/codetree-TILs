#include <iostream>
using namespace std;
int main() {
    int n,max=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int temp1 = 0,temp10 = 0,temp100 = 0,temp1000 = 0, temp10000 = 0;
                if(arr[i]%10 + arr[j]%10 + arr[k]%10 < 10)
                {
                    temp1 = (arr[i]%10 + arr[j]%10 + arr[k]%10);
                    if(arr[i]%100/10 + arr[j]%100/10 + arr[k]%100/10 < 10)
                    {
                        temp10 = (arr[i]%100/10 + arr[j]%100/10 + arr[k]%100/10);
                        if(arr[i]%1000/100 + arr[j]%1000/100 + arr[k]%1000/100 < 10)
                        {
                            temp100 = (arr[i]%1000/100 + arr[j]%1000/100 + arr[k]%1000/100);
                            if(arr[i]%10000/1000 + arr[j]%10000/1000 + arr[k]%10000/1000 < 10)
                            {
                                temp1000 = (arr[i]%10000/1000 + arr[j]%10000/1000 + arr[k]%10000/1000);
                                if(arr[i]/10000 + arr[j]/10000 + arr[k]/10000 < 10)
                                {
                                    temp10000 = arr[i]/10000 + arr[j]/10000 + arr[k]/10000;
                                    if(max < temp10000*10000 + temp1000*1000 + temp100*100 + temp10*10 + temp1) max = temp10000*10000 + temp1000*1000 + temp100*100 + temp10*10 + temp1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<max;
    return 0;
}
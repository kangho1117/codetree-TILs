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
                if(arr[i]%10 + arr[j]%10 + arr[k]%10 < 10
                    && arr[i]%100/10 + arr[j]%100/10 + arr[k]%100/10 < 10
                    && arr[i]%1000/100 + arr[j]%1000/100 + arr[k]%1000/100 < 10
                    && arr[i]%10000/1000 + arr[j]%10000/1000 + arr[k]%10000/1000 < 10
                    && arr[i]/10000 + arr[j]/10000 + arr[k]/10000 < 10)
                {
                    int temp = (arr[i]%10 + arr[j]%10 + arr[k]%10) + (arr[i]%100/10 + arr[j]%100/10 + arr[k]%100/10)*10 + (arr[i]%1000/100 + arr[j]%1000/100 + arr[k]%1000/100)*100 + (arr[i]%10000/1000 + arr[j]%10000/1000 + arr[k]%10000/1000)*1000 + (arr[i]/10000 + arr[j]/10000 + arr[k]/10000)*10000;
                    if(max < temp) max = temp;   
                }
            }
        }
    }
    cout<<max;
    return 0;
}
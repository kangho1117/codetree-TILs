#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    for(int i=1;arr[0]-i>0;i++)
    {
        int digit[2*(n+1)]={0,},temp[n]={0,};
        temp[0] = i;
        temp[1] = arr[0]-i;
        if(temp[0] == temp[1]) continue;
        digit[i] = 1;
        digit[arr[0]-i] = 1;
        for(int j=2;j<n;j++)
        {
            int num = arr[j-1]-temp[j-1];
            if(digit[num] || num <= 0) {temp[n-1]=0;break;}
            else temp[j] = num;
        }
        if(temp[n-1])
        {
            for(int k=0;k<n;k++)
                cout<<temp[k]<<" ";
        }
    }
    return 0;
}
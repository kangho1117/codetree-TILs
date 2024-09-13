#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],sum=0,min=9999999;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j) sum += arr[j] * (i-j);
            else if(i<=j) sum += arr[j] * (j-i);
        }
        if(sum < min) min = sum;
        sum = 0;
    }
    cout<<min;
    return 0;
}
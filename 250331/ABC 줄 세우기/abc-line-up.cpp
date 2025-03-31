#include <iostream>
using namespace std;
int n,sum=0;
char arr[26];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for(int j=n-1;j>=0;j--)
    {
    for(int i=0;i<j;i++)
    {
        if(arr[i] > arr[i+1])
        {
            char temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            sum++;
        }
    }
    }
    cout<<sum;
    return 0;
}
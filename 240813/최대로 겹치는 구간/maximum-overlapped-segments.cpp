#include <iostream>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int arr[201] = {0,};
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=a;j<b;j++)
            arr[j+100]++;
    }
    for(int i=0;i<=200;i++)
        if(arr[i]>max) max = arr[i];
    cout<<max;
    return 0;
}
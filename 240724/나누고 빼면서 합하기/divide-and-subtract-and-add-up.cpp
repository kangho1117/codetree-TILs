#include <iostream>
using namespace std;
int cal(int n, int m)
{
    int arr[n+1]={0};
    int sum=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    while(m != 1)
    {
        sum += arr[m];
        if(m%2==0) m/=2;
        else m-=1;
    }
    sum += arr[m];
    return sum;
}
int main() {
    int n,m;
    cin>>n>>m;
    cout<<cal(n,m);
    return 0;
}
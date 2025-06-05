#include <iostream>
using namespace std;
int main() {
    int n,t,sum=0;
    double cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
        cnt+=1;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<sum/cnt;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    for(int i=0,t;i<n;i++)
    {
        cin>>t;
        if(t%2!=0 && t%3==0) sum+=t;
    }
    cout<<sum;
    return 0;
}
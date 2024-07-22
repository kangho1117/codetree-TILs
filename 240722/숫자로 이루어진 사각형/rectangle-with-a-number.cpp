#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int sum=1, i=0; i<n; i++)
    {
        for(int j=0; j<n; j++, (sum%=9)++)
            cout<<sum<<" ";
        cout<<"\n";
    }
    return 0;
}
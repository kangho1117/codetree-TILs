#include <iostream>
using namespace std;
void cal(int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp < 0) cout<<(-1)*(temp)<<" ";
        else cout<<temp<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    cal(n);
    return 0;
}
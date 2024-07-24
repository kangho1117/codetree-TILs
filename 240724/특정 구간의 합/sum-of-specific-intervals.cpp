#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int main() {
    int n,m;
    cin>>n>>m;
    vec.push_back(0);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int a1,a2,sum=0;
        cin>>a1>>a2;
        for(int j=a1;j<=a2;j++)
            sum+=vec[j];
        cout<<sum<<"\n";
    }
    return 0;
}
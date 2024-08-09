#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n,b;
    cin>>n>>b;
    while(n>=b)
    {
        v.push_back(n%b);
        n/=b;
    }
    v.push_back(n);
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
    return 0;
}
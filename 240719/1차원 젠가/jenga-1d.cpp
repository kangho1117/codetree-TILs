#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vec(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    int s1,e1,s2,e2;
    cin>>s1>>e1;
    cin>>s2>>e2;
    vector<int> temp(1,0);
    int size = temp.size();
    for(int i=1;i<=n;i++)
    {
        if(s1<=i && i <= e1) continue;
        else temp.push_back(vec[i]);
    }
    for(auto a : temp)
        cout<<a<<"\n";
    vec.clear();
    vec.push_back(0);
    for(int i=1;i<=size;i++)
    {
        if(s2<=i && i <= e2) continue;
        else vec.push_back(temp[i]);
    }
    size = vec.size();
    for(auto a : vec)
        cout<<a<<"\n";
    return 0;
}
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
    
    for(int i=1;i<=n;i++)
    {
        if(s1<=i && i <= e1) continue;
        else temp.push_back(vec[i]);
    }
    int size = temp.size();
    vec.clear();
    vec.push_back(0);
    for(int i=1;i<size;i++)
    {
        if(s2<=i && i <= e2) continue;
        else vec.push_back(temp[i]);
    }
    size = vec.size();
    cout<<size-1<<"\n";
    for(int i=1;i<vec.size();i++)
        cout<<vec[i]<<"\n";
    return 0;
}
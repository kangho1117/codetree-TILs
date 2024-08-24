#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    a.push_back(0);
    b.push_back(0);
    for(int i=0;i<n;i++)
    {
        int v,t;
        cin>>v>>t;
        while(t--)
        {
            a.push_back(a.back()+v);
        }
    }
    for(int i=0;i<m;i++)
    {
        int v,t;
        cin>>v>>t;
        while(t--)
            b.push_back(b.back()+v);
    }

    char sun;
    if(a[1] > b[1]) sun = 'a';
    else sun = 'b';
    int ch=0;
    for(int i=1;i<a.size();i++)
    {
        if(sun == 'b' && a[i] > b[i]) {sun = 'a'; ch++;}
        else if(sun == 'a' && a[i] < b[i]) {sun = 'b'; ch++;}
    }
    cout<<ch;
    return 0;
}
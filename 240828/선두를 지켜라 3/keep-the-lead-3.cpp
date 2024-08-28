#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    vector<int> a,b;
    a.push_back(0);
    b.push_back(0);
    for(int i=0;i<N;i++)
    {
        int v,t;
        cin>>v>>t;
        while(t--)
            a.push_back(a.back()+v);
    }
    for(int i=0;i<M;i++)
    {
        int v,t;
        cin>>v>>t;
        while(t--)
            b.push_back(b.back()+v);
    }
    string m = "AB";
    int ans=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i] == b[i])
        {
            if(m != "AB")
            {
                m = "AB";
                ans++;
            }
        }
        else if(a[i] > b[i])
        {
            if(m != "A")
            {
                m = "A";
                ans++;
            }
        }
        else if(a[i] < b[i])
        {
            if(m != "B")
            {
                m = "B";
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
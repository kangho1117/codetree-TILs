#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s = to_string(i);
        if(i%3==0)
        {
            cout<<0<<" ";
        }
        else if(s.size()==2)
        {
            if(s[0]=='3' || s[0]=='6' || s[0]=='9' || s[1]=='3' || s[1]=='6' || s[1]=='9') cout<<0<<" ";
            else cout<<i<<" ";
        }
        else cout<<i<<" ";
    }
    return 0;
}
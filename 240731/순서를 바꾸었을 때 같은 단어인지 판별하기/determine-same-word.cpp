#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    bool same = true;
    if(s1.size() == s2.size())
    {
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i] != s2[i]) same = false;
        }
    }
    else same =false;
    if(same) cout<<"Yes";
    else cout<<"No";
    return 0;
}
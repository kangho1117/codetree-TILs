#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    if(s[1]==':')
    {
        int n = s[0]-48;
        cout<<n+1<<s.substr(1);
    }
    else
    {
        int n = stoi(s.substr(0,2));
        cout<<n+1<<s.substr(2);
    }
    return 0;
}
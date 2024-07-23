#include <iostream>
#include <string>
using namespace std;
bool check(string &str)
{
    for(int i=0, j=str.size()-1;i<str.size();i++,j--)
    {
        if(str[i] != str[j]) return 0;
    }
    return 1;
}
int main() {
    string str;
    cin>>str;
    if(check(str)) cout<<"Yes";
    else cout<<"No";
    return 0;
}
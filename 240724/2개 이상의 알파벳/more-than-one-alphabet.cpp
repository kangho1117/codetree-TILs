#include <iostream>
#include <string>
using namespace std;
string search(string str)
{
    char a = str[0];
    for(int i=1;i<str.size();i++)
        if(str[i] != a) return "Yes";
    return "No";
}
int main() {
    string str;
    cin>>str;
    cout<<search(str);
    return 0;
}
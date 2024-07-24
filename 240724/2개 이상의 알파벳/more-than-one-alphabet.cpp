#include <iostream>
#include <string>
using namespace std;
string search(string str)
{
    char a = str[0],b='!';
    for(int i=1;i<str.size();i++)
    {
        if(b == '!' && str[i] != a) b=str[i];
        if(b != '!' && str[i] != a && str[i] != b) return "Yes";
    } 
    return "No";
}
int main() {
    string str;
    cin>>str;
    cout<<search(str);
    return 0;
}
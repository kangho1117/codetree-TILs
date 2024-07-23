#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b,c;
    string str1="",str2="";
    cin>>a>>b;
    for(int i=0;i<a;i++)
        {
            cin>>c;
            str1.append(to_string(c));
        }
    for(int i=0;i<b;i++)
        {
            cin>>c;
            str2.append(to_string(c));
        }
    if(str1.find(str2) != -1) cout<<"Yes";
    else cout<<"No";
    return 0;
}
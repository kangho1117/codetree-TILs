#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        string tempstr = str.substr(0,i);
        if(str.find(tempstr,i+1) != string::npos) continue;
        else
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
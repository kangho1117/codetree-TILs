#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == ')') continue;
        for(int j=i+1;j<str.size();j++)
            if(str[j] ==')') sum++;
    }
    cout<<sum;
    return 0;
}
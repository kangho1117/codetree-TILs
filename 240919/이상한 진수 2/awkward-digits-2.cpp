#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin>>s;
    bool all=true;
    for(auto &a : s)
    {
        if(a=='0')
        {
            a='1';
            all = false;
            break;
        }
    }
    if(all) s.back() = '0';
    int sum=0;
    for(int i=s.size()-1,j=0;i>=0;i--,j++)
        sum += (s[i]-48)*pow(2,j);
    cout<<sum;
    return 0;
}
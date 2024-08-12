#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    int a,b,sum=0;
    cin>>a>>b>>n;
    for(int i=n.size()-1;i>=0;i--)
        sum = a * sum + n[i]-48;
    n="";
    while(sum != 1)
    {
        n += to_string(sum%b);
        sum/=b;
    }
    n+="1";
    for(int i= n.size()-1;i>=0;i--)
        cout<<n[i];
    return 0;
}
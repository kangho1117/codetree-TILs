#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n.size(); i++)
        sum = sum*2 + n[i]-48;
    sum *= 17;
    n="";
    while(sum!=1)
    {
        n+=to_string(sum%2);
        sum/=2;
    }
    n+=to_string(sum);
    for(int i=n.size()-1; i>=0; i--)
        cout<<n[i];
    return 0;
}
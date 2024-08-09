#include <iostream>
#include <string>
using namespace std;
int main() {
    string str; cin>>str;
    int sum=0;
    for(auto &a :str)
        sum = sum*2 + a-48;
    cout<<sum;
    return 0;
}
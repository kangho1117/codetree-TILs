#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    string str;
    cin>>str>>n;
    pair<int, string> p0 = {50, "codetree"};
    pair<int, string> p1 = {n, str};
    cout<<"product "<<p0.first<<" is "<<p0.second<<"\n";
    cout<<"product "<<p1.first<<" is "<<p1.second<<"\n";
    return 0;
}
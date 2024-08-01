#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    string str;
    int lv;
    pair<string,int> p = {"codetree" ,10};
    cout<<"user "<<p.first<<" lv "<<p.second<<"\n";
    cin>>str>>lv;
    p = {str,lv};
    cout<<"user "<<p.first<<" lv "<<p.second<<"\n";
    return 0;
}
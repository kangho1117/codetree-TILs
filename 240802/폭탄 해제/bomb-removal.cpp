#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
    string code,color,sec;
    cin>>code>>color>>sec;
    tuple<string,string,string> t(code,color,sec);
    cout<<"code : "<<get<0>(t)<<"\n";
    cout<<"color : "<<get<1>(t)<<"\n";
    cout<<"second : "<<get<2>(t)<<"\n";
    return 0;
}
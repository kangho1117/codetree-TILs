#include <iostream>
#include <iostream>
using namespace std;
int main() {
    string str,sub;
    cin>>str>>sub;
    int idx = str.find(sub);
    if(idx != string::npos) cout<<idx;
    else cout<<-1;
    return 0;
}
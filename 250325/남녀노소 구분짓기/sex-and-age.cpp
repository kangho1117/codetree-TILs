#include <iostream>
using namespace std;
int main() {
    int s,a;
    cin>>s>>a;
    if(s==0)
    {
        if(19<=a) cout<<"MAN";
        else cout<<"BOY";
    }
    else
    {
        if(19<=a) cout<<"WOMAN";
        else cout<<"GIRL";
    }
    return 0;
}
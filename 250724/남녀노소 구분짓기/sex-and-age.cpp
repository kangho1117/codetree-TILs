#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a==0 && b>=19) cout<<"MAN";
    else if(a==0 && b<19) cout<<"BOY";
    else if(a==1 && b>=19) cout<<"WOMAN";
    else if(a==1 && b<19) cout<<"GIRL";
    return 0;
}
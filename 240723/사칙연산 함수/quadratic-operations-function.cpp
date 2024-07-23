#include <iostream>
using namespace std;
void cal(int a, char c, int b)
{
    if(c=='+')
        cout<<a<<" "<<c<<" "<<b<<" = "<<a+b;
    else if(c=='-')
        cout<<a<<" "<<c<<" "<<b<<" = "<<a-b;
    else if(c=='*')
        cout<<a<<" "<<c<<" "<<b<<" = "<<a*b;
    else if(c=='/')
        cout<<a<<" "<<c<<" "<<b<<" = "<<a/b;
    else 
        cout<<"False";
}
int main() {
    int a,b;
    char c;
    cin>>a>>c>>b;
    cal(a,c,b);
    return 0;
}
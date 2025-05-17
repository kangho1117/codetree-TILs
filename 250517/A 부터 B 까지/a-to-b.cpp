#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    while(a<=b)
    {
        cout<<a<<" ";
        if(a%2==0) a+=3;
        else if(a%2!=0) a*=2;
    }
    return 0;
}
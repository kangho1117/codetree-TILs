#include <iostream>
using namespace std;
int main() {
    int a,b,c,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        c = a;
        a = b;
        b = c;
    }
    for(int i=a;i<=b;i++)
        if(i%5==0) sum+=i;
    cout<<sum;
    return 0;
}
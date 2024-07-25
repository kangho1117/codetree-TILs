#include <iostream>
using namespace std;
int cal(int a)
{
    if(a==0) return 0;
    if(a==1) return 1;
    return cal(a/10) + a%10;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<cal(a*b*c);
    return 0;
}
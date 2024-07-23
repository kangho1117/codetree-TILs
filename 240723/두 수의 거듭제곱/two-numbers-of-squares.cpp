#include <iostream>
using namespace std;
int power(int a,int b)
{
    int sum=1;
    for(int i=0;i<b;i++)
        sum *= a;
    return sum;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
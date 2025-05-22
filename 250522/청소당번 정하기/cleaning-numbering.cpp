#include <iostream>
using namespace std;
int main() {
    int n, g=0,b=0,h=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%12==0)h++;
        else if(i%3==0)b++;
        else if(i%2==0) g++;
    }
    cout<<g<<" "<<b<<" "<<h;
    return 0;
}
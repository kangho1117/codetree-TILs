#include <iostream>
using namespace std;
void star(int n)
{
    if(n==0) return;
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<"\n";
    star(n-1);
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<"\n";
}
int main() {
    int n;
    cin>>n;
    star(n);
    return 0;
}
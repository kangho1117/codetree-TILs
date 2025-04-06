#include <iostream>
using namespace std;

int main() {
    int A=0;
    for(int i=0;i<3;i++)
    {
        char c;
        int n;
        cin>>c>>n;
        if(c=='Y' && n>=37) A++;
    }
    if(A>=2) cout<<"E";
    else cout<<"N";
    return 0;
}
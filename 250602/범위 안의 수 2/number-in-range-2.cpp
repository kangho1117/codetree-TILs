#include <iostream>
using namespace std;
int main() {
    int sum=0;
    double n=0;
    for(int i=0,t;i<10;i++)
    {
        cin>>t;
        if(0<=t && t<=200)
        {
            sum+=t;
            n++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<sum/n;
    return 0;
}
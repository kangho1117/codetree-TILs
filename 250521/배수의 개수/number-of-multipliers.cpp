#include <iostream>
using namespace std;
int main() {
    int cnt1=0,cnt2=0;
    for(int i=0,t;i<10;i++) {
        cin>>t;
        if(t%3==0) cnt1++;
        if(t%5==0) cnt2++;
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;
}
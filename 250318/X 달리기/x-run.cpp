#include <iostream>
using namespace std;
int X;
int main() {
    cin >> X;
    int minsec=100000;
    for(int hs=1;hs<=X;hs++)
    {
        int dis=0,sec=0;
        for(int s=1;s<=hs;s++)
        {
            sec++;
            dis+=s;
        }
        for(int s=hs;s>=1;s--)
        {
            sec++;
            dis+=s;
        }
        if(X>dis) sec += X-dis;
        if(minsec > sec) minsec = sec;
    }
    cout<<minsec;
    return 0;
}
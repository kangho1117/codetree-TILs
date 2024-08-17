#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, cur=150000;
    cin>>n;
    vector<char> arr(300000,'N');
    for(int i=0;i<n;i++)
    {
        int a;
        char b;
        cin>>a>>b;
        if(b=='R')
        {
            for(int i=0;i<a;i++)
                arr[cur+i] = 'B';
            cur += (a-1);
        }
        else
        {
            for(int i=0;i<a;i++)
                arr[cur-i] = 'W';
            cur -= (a-1);
        }
    }
    int bl=0,wh=0;
    for(auto &a : arr)
    {
        if(a == 'B' ) bl++;
        else if(a == 'W' ) wh++;
    }
    cout<<wh<<" "<<bl;
    return 0;
}
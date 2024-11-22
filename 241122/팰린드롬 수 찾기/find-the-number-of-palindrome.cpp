#include <iostream>
#include <string>
using namespace std;
int main() {
    int x,y,cnt=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        string str = to_string(i);
        bool find = true;
        for(int a=0,b=str.size()-1;b>0,a<str.size();a++,b--) if(str[a] != str[b]) find = false;
        if(find) cnt++;
    }
    cout<<cnt;
    return 0;
}
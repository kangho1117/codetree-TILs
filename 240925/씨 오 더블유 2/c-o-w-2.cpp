#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,cnt=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(str[i]=='C' && str[j] == 'O' && str[k] == 'W') cnt++;
    cout<<cnt;
    return 0;
}
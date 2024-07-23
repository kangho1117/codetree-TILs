#include <iostream>
#include <string>
using namespace std;
int count(int a,int b)
{
    int cnt=0;
    
    for(int i=a;i<=b;i++)
    {
        string str = to_string(i);
        if(i%3==0) 
            cnt++;
        else
        {
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='3' || str[j]=='6' || str[j]=='9') 
                {
                    cnt++;
                    break;
                }
            }  
        }
    }
    return cnt;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<count(a,b);
    return 0;
}
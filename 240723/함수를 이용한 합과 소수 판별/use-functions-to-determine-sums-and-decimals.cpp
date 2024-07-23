#include <iostream>
#include <string>
using namespace std;
int cal(int a, int b)
{
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        bool check=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0) 
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            string str = to_string(i);
            int sum=0;
            for(int j=0;j<str.size();j++)
            {
                sum+=str[j];
            }
            if(sum%2 != 0) check = false;
        }
        if(check) cnt++;
    }
    return cnt;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<cal(a,b);
    return 0;
}
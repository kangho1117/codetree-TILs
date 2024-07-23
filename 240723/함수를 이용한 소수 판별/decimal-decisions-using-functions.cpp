#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int sum=0;
    
    for(int i=a;i<=b;i++)
    {
        bool check=true;
        for(int j=2;j<=i-1;j++)
        {
            if(i%j==0) 
            {
                check = false;
                break;
            }
        }
        if(check) sum += i;
    }
    return sum;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<sum(a, b);
    return 0;
}
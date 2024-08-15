#include <iostream>
using namespace std;
int main() {
    int n,cur=1500;
    cin>>n;
    int arr[3000]={0,};
    while(n--)
    {
        int a;
        char b;
        cin>>a>>b;
        if(b=='R')
        {
            for(int i=0;i<a;i++)
                arr[cur+i]++;   
            cur += a;
        }
        else if(b=='L')
        {
            for(int i=1;i<=a;i++)
                arr[cur-i]++;
            cur -= a;
        }
    }
    int sum=0;
    for(int i=1;i<3000;i++)
        if(arr[i]>=2) sum++;
    cout<<sum;
    return 0;
}
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
            for(int i=0;i<=a;i++)
                arr[cur+i]++;   
            cur += a;
        }
        else if(b=='L')
        {
            for(int i=0;i<=a;i++)
                arr[cur-i]++;
            cur-=a;
        }
    }
    int sum=0;
    for(int i=0;i<3000;i++)
    {
        if(arr[i]>=2) sum++;
        if(arr[i]>=2 && i<2999 && arr[i+1]<2) sum--;
    }
    cout<<sum;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    int arr1[1000*1000+1]={0,}, arr2[1000*1000+1]={0,};
    for(int i=0,b,time=0,cur=0;i<N;i++)
    {
        char a;
        cin>>a>>b;
        if(a=='R') 
        {
            for(int j=1; j<=b; time++,++cur,j++)
                arr1[time] = cur;
        }
            
        else
        {
            for(int j=1; j<=b; time++,cur--,j++)
                arr1[time] = cur;
        }
            

    }
    for(int i=0,b,time=0,cur=0;i<M;i++)
    {
        char a;
        cin>>a>>b;
        if(a=='R') 
        {
            for(int j=1; j<=b; time++,++cur,j++)
                arr2[time] = cur;
        }
            
        else
        {
            for(int j=1; j<=b; time++,cur--,j++)
                arr2[time] = cur;
        }
    }
    bool b= false;
    for(int i=1; i<1000*1000+1 ;i++)
    {
        if(arr1[i] == arr2[i]) {cout<<i; b = true; break;}

    }
    if(b) cout<<-1;
    return 0;
}
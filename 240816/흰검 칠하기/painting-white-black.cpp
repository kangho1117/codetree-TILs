#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
int main() {
    int n, cur=10000;
    cin>>n;
    vector<tuple<char,int,int>> arr(200000,tuple<char,int,int>('N',0,0));
    for(int i=0;i<n;i++)
    {
        int a;
        char b;
        cin>>a>>b;
        if(b=='R')
        {
            for(int i=0;i<a;i++)
            {
                get<0>(arr[cur+i]) = 'B';
                get<1>(arr[cur+i])++;
            }
            cur += (a-1);
        }
        else
        {
            char fix = get<0>(arr[cur]);
            for(int i=0;i<a;i++)
            {
                    get<0>(arr[cur-i]) = 'W';
                    get<2>(arr[cur-i])++;
            }
            cur -= (a-1);
        }
    }
    int bl=0,wh=0,gr=0;
    for(auto &a : arr)
    {
        
        if(get<1>(a) >= 2 && get<2>(a) >= 2)
        {
            //cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
            gr++;
        } 
        else if(get<0>(a) == 'B' )
        {
            //cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
            bl++;
        }
        else if(get<0>(a) == 'W' )
        {
            //cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
            wh++;
        }
    }
    cout<<wh<<" "<<bl<<" "<<gr;
    return 0;
}
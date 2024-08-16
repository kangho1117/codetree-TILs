#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, cur=10000;
    cin>>n;
    vector<pair<char,int>> arr(20001,pair<char,int>('N',0));
    //pair<char,int> arr[20001] = {0,};
    for(int i=0;i<n;i++)
    {
        int a;
        char b;
        cin>>a>>b;
        if(b=='R')
        {
            char fix = arr[cur].first;
            for(int i=0;i<a;i++)
            {
                if(fix == 'N') arr[cur+i].first = 'B';
                else if(fix == 'B') arr[cur+i].first = 'W';
                else if(fix == 'W') arr[cur+i].first = 'B';
                arr[cur+i].second++;
            }
            cur += (a-1);
        }
        else
        {
            char fix = arr[cur].first;
            for(int i=0;i<a;i++)
            {
                if(fix == 'N') arr[cur+i].first = 'B';
                else if(fix == 'B') arr[cur-i].first = 'W';
                else if(fix == 'W') arr[cur-i].first = 'B';
                arr[cur-i].second++;
            }
            cur -= (a-1);
        }
    }
    int bl=0,wh=0,gr=0;
    for(int i=0;i<20001;i++)
    {
        if(arr[i].first == 'W' && arr[i].second < 4) 
        {
            //cout<<i-1000<<" "<<arr[i].second<<" \n";
            wh++;
        }
        else if(arr[i].first == 'B' && arr[i].second < 4) {
            //cout<<i-1000<<" "<<arr[i].second<<" \n";
            bl++;
        }
        else if(arr[i].second >= 4 ) {
            //cout<<i-1000<<" "<<arr[i].second<<" \n";
            gr++;}
    }
    cout<<wh<<" "<<bl<<" "<<gr;
    return 0;
}
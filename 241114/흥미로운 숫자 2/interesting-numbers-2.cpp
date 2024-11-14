#include <iostream>
#include <string>
using namespace std;
int main() {
    int X,Y,cnt=0;
    cin>>X>>Y;
    for(int i = X; i<=Y; i++)
    {
        int arr[10] = {0,};
        string str = to_string(i);
        for(char &a : str)
            arr[a-48]++;
        bool other=false, one=false;
        for(int j=0;j<=9;j++)
        {
            if(one == false && arr[j]==1) one = true;
            else if(other == false && arr[j] > 1) other = true;
            else if(arr[j]==0) continue;
            else
            {
                one = false;
                other = false;
                break;
            }
            
        }
        if(one && other) cnt++;
    }
    cout<<cnt;
    return 0;
}
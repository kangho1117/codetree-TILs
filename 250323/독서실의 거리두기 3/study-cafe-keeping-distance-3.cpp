#include <iostream>
#include <string>
using namespace std;
int N;
string seats;
int main() {
    cin >> N;
    cin >> seats;
    int a=0,b=-1,mlen=0,ma,mb;
    for(int i=1;i<seats.size();i++)
    {   
        if(seats[i] == '1' && b==-1)
        {
            b = i;
            if(mlen < b-a) 
            {
                mlen = b-a;
                ma = a;
                mb = b;
            }
            a = b;
            b = -1;
        }
    }
    seats[(ma+mb)/2] = '1';
    a=0,b=-1,mlen=1000,ma,mb;
    for(int i=1;i<seats.size();i++)
    {   
        if(seats[i] == '1' && b==-1)
        {
            b = i;
            if(mlen > b-a) 
            {
                mlen = b-a;
                ma = a;
                mb = b;
            }
            a = b;
            b = -1;
        }
    }
    cout<<mlen;
    return 0;
}
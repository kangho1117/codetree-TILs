#include <iostream>
using namespace std;

int main() {
    int n,x=0,y=0,t=0;
    cin>>n;
    while(n--)
    {
        char a;
        int b;
        cin>>a>>b;
        if(a=='E'){
            while(b--)
            {
                y++;
                t++;
                if(x==0 && y==0)
                {
                    cout<<t;
                    return 0;
                }
            }
        }
        else if(a=='S'){
            while(b--)
            {
                x++;
                t++;
                if(x==0 && y==0)
                {
                    cout<<t;
                    return 0;
                }
            }
        }
        else if(a=='W'){
            while(b--)
            {
                y--;
                t++;
                if(x==0 && y==0)
                {
                    cout<<t;
                    return 0;
                }
            }
        }
        else if(a=='N'){
            while(b--)
            {
                x--;
                t++;
                if(x==0 && y==0)
                {
                    cout<<t;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
    return 0;
}